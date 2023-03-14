#include "main.h"

int main() {
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

	WINDOW * chessBoard[64] = {0};

	start_color();
	refresh();
	initColors();
	drawChessboard(chessBoard);
	getch();
	endwin();
	return 0;
}
