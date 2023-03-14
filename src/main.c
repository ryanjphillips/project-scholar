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

	struct BoardTile chessBoard[64];

	start_color();
	refresh();
	initColors();
	drawChessboard(chessBoard);
	getch();
	endwin();
	return 0;
}
