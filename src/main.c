#include "main.h"

int main() {
	// Variables 
	int ch;
	int selectedTile;
	int previousBackground; 
	int count;
	MEVENT event;

	// Ncurses setup 
	setlocale(LC_ALL, "");
	initscr();
	cbreak();
	clear();
  raw();
  keypad(stdscr, TRUE);
  mousemask(ALL_MOUSE_EVENTS | REPORT_MOUSE_POSITION, NULL);
	noecho();
	clear();
  cbreak();
	start_color();
	refresh();
	initColors();

	struct Dimensions boardDimensions;
	struct Tile boardTiles[64];
	struct Piece boardPieces[32];
	struct Chessboard chessBoard;

	// Starting Board
	dimensions(&boardDimensions);
	tile(boardTiles, &boardDimensions);
	refreshWindowArray(boardTiles);
	piece(boardPieces);
	chessboard(&chessBoard, boardTiles);
	addPieceToTile(boardTiles, boardPieces, 32);

  while ((ch = getch()) != 'q')
  {
    if (ch == KEY_MOUSE)
    {
			wbkgd(boardTiles[selectedTile].pWindow, COLOR_PAIR(boardTiles[selectedTile].backgroundColor)); 
			wrefresh(boardTiles[selectedTile].pWindow);
      assert(getmouse(&event) == OK);

			  selectedTile = determineSelectedTile(boardTiles, event.y, event.x);

				if (selectedTile != -1) {
					move(3,0);
					clrtoeol();
					mvaddstr(0,0, "Location:");
					mvaddstr(1, 0, boardTiles[selectedTile].notation);
					mvaddstr(2,0, "Piece at Location:");
					move(5,0);
					clrtoeol();

					determinePieceSelection(boardTiles[selectedTile].pPiece);
					if (boardTiles[selectedTile].isEmpty == false) {
					  mvaddstr(3, 0, boardTiles[selectedTile].pPiece->name);
						mvaddstr(4,0, "Piece Notation:");
						mvaddstr(5,0,boardTiles[selectedTile].pPiece->notation);
					} else {
						mvaddstr(3, 0, "none");
					}

		  	  wbkgd(boardTiles[selectedTile].pWindow, COLOR_PAIR(TILE_SELECTED));
		  	  wrefresh(boardTiles[selectedTile].pWindow);
				}
		}
		count++;
  }

	getch();
	endwin();
	return 0;
}
