#include "main.h"

int main() {
	setlocale(LC_ALL, "");
	initscr();
	cbreak();
	clear();
  raw();
  keypad(stdscr, TRUE);
	noecho();
	clear();
  cbreak();
	mainMenu();
	chessboard();
	endwin();
	return 0;
}
