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
	start_color();
	refresh();
	initColors();
	//mainMenu();
	chessboard();
	endwin();
	return 0;
}
