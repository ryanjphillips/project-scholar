#include "main.h"

int main() {
	int ch;
	int selectedTile;
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
			 int selectedTile;

			wbkgd(chessBoard[selectedTile].tileWindow, COLOR_PAIR(chessBoard[selectedTile].tileBackgroundColor));
			wrefresh(chessBoard[selectedTile].tileWindow);
      assert(getmouse(&event) == OK);

			  selectedTile = determineSelectedTile(chessBoard, event.y, event.x);

				if (selectedTile != -1){
		  	  wbkgd(chessBoard[selectedTile].tileWindow, COLOR_PAIR(TILE_SELECTED));
		  	  wrefresh(chessBoard[selectedTile].tileWindow);
				}
		}
  }

	getch();
	endwin();
	return 0;
}
