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
	curs_set(0);

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
    if (ch == KEY_MOUSE) {
      assert(getmouse(&event) == OK);

			  selectedTile = determineSelectedTile(boardTiles, event.y, event.x);

				// Determine if we need if a move was made and do so if it was

				if (boardTiles[selectedTile].isSelected == true) {

					addPieceToTileSingle(&boardTiles[selectedTile], &boardTiles[previousTile]);
					removePieceFromTile(&boardTiles[previousTile]);
				}

				// Restore previous click window to not have "clicked background." when the user clicks outside of the chessboard.
				
				if (previousTile != -1) {
				  removeWindowBackground(boardTiles, 64);
			    wbkgd(boardTiles[previousTile].pWindow, COLOR_PAIR(boardTiles[previousTile].backgroundColor)); 
			    wrefresh(boardTiles[previousTile].pWindow);
				}

        previousTile = selectedTile;

				if (boardTiles[selectedTile].isEmpty == false) {
					if (selectedTile != -1 && strcmp(boardTiles[selectedTile].pPiece->blackOrWhite, "White") == 0) {

							wrefresh(boardTiles[previousTile].pWindow);
							wbkgd(boardTiles[selectedTile].pWindow, COLOR_PAIR(boardTiles[selectedTile].backgroundColor)); 
							wrefresh(boardTiles[selectedTile].pWindow);
							determinePieceSelection(boardTiles, boardTiles[selectedTile].pPiece);
							wbkgd(boardTiles[selectedTile].pWindow, COLOR_PAIR(TILE_SELECTED));
							wrefresh(boardTiles[selectedTile].pWindow);
						}
				}
		}
  }

	getch();
	endwin();
	return 0;
}
