#define _X_OPEN_SOURCE_EXTENEDED
#include <ncurses.h>
#include <locale.h>
#include <wchar.h>
#include "chessboard.h"
#include "drawChessboard.c"
#include "drawPiece.c"

int main() {

	setlocale(LC_ALL, "");
	initscr();
	cbreak();
	noecho();
	clear();

	start_color();
	init_pair(BLACK_SQUARE, COLOR_CYAN, COLOR_CYAN);
	init_pair(WHITE_SQUARE, COLOR_WHITE, COLOR_WHITE); 
	init_pair(WHITE_PIECE_ON_BLACK, FALSE, COLOR_BLACK);
	init_pair(WHITE_PIECE_ON_WHITE, FALSE, COLOR_WHITE);
	init_pair(BLACK_PIECE_ON_BLACK, FALSE, COLOR_BLACK);
	init_pair(BLACK_PIECE_ON_WHITE, FALSE, COLOR_WHITE);
	init_color(COLOR_RED, 139,69,19);

	drawChessboard();
	drawPiece(0, 0, BLACKROOK, BLACK_PIECE_ON_WHITE);

	// closing functions
	
	wrefresh(stdscr);
	refresh();
	getch();
	endwin();

	return 0;
}
