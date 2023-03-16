#include "main.h"

int main() {
	int ch;
	int selectedTile;
	int previousBackground; 
	int count;
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
	previousBackground = 1;
	count = 0;

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
			 int selectedBackground;

			if (count == 0) {
			  wbkgd(chessBoard[selectedTile].tileWindow, COLOR_PAIR(previousBackground));
			  wrefresh(chessBoard[selectedTile].tileWindow);
			} else {

			  wbkgd(chessBoard[selectedTile].tileWindow, COLOR_PAIR(selectedBackground));
			  wrefresh(chessBoard[selectedTile].tileWindow);

			}

      assert(getmouse(&event) == OK);

			  selectedTile = determineSelectedTile(chessBoard, event.y, event.x);
				selectedBackground = chessBoard[selectedTile].tileBackgroundColor;

				if (selectedTile != -1){
					mvaddstr(0, 0, chessBoard[selectedTile].tileNotation );
					mvaddstr(3,3 , chessBoard[selectedTile].tilePieceName);
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
