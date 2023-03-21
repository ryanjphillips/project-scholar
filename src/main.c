#include "main.h"

int main() {
	// Variables 
	int ch;
	int selectedTile;
	int previousTile;
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
	struct Player whitePlayer;

	// Starting Board
	player(&whitePlayer);
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
      assert(getmouse(&event) == OK);

			  selectedTile = determineSelectedTile(boardTiles, event.y, event.x);

				// Restore previous click window to not have "clicked background."
				if (selectedTile != -1 && previousTile > -1 ) {
				  removeWindowBackground(boardTiles, 64);
			    wbkgd(boardTiles[previousTile].pWindow, COLOR_PAIR(boardTiles[previousTile].backgroundColor)); 
			    wrefresh(boardTiles[previousTile].pWindow);
				}

        previousTile = selectedTile;

				if (selectedTile != -1) {

			      wbkgd(boardTiles[selectedTile].pWindow, COLOR_PAIR(boardTiles[selectedTile].backgroundColor)); 
			      wrefresh(boardTiles[selectedTile].pWindow);
					if (boardTiles[selectedTile].isEmpty == false) {
						
					  determinePieceSelection(boardTiles, boardTiles[selectedTile].pPiece);
		  	    wbkgd(boardTiles[selectedTile].pWindow, COLOR_PAIR(TILE_SELECTED));
		  	    wrefresh(boardTiles[selectedTile].pWindow);
					}
				}
		}
		count++;
  }

	getch();
	endwin();
	return 0;
}
