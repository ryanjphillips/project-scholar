#include "main.h"

int main() {
	int ch;
	int selectedTile;
	int previousBackground; 
	int count;
	int tileLength;
	int tileWidth;
	MEVENT event;
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

	struct BoardTile chessBoard[64];
	selectedTile = 0;

	start_color();
	refresh();
	initColors();
	drawChessboard(chessBoard);
	iniStartingBoard(chessBoard);


  while ((ch = getch()) != 'q')
  {
    if (ch == KEY_MOUSE)
    {
			wbkgd(chessBoard[selectedTile].tileWindow, COLOR_PAIR(chessBoard[selectedTile].tileBackgroundColor)); 
			wrefresh(chessBoard[selectedTile].tileWindow);
      assert(getmouse(&event) == OK);

			  selectedTile = determineSelectedTile(chessBoard, event.y, event.x);

				if (selectedTile != -1) {
					move(3,0);
					clrtoeol();
					mvaddstr(0,0, "Location:");
					mvaddstr(1, 0, chessBoard[selectedTile].tileNotation );
					mvaddstr(2,0, "Piece at Location:");
					mvaddstr(3, 0, chessBoard[selectedTile].tilePieceName);
		  	  wbkgd(chessBoard[selectedTile].tileWindow, COLOR_PAIR(TILE_SELECTED));
		  	  wrefresh(chessBoard[selectedTile].tileWindow);
				}
		}
		count++;
  }

	getch();
	endwin();
	return 0;
}
