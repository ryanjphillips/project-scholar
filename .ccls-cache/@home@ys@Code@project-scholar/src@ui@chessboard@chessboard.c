#include "chessboard.h"
#include "drawChessboard.c"

int main() {
	setlocale(LC_ALL, "");
	initscr();
	cbreak();
	noecho();
	clear();

	start_color();
	use_default_colors();
	init_pair(BLACK_SQUARE, FALSE, COLOR_CYAN);
	init_pair(WHITE_SQUARE, FALSE, COLOR_WHITE); 
	init_pair(WHITE_PIECE_ON_BLACK, FALSE, COLOR_BLACK);
	init_pair(WHITE_PIECE_ON_WHITE, FALSE, COLOR_WHITE);
	init_pair(BLACK_PIECE_ON_BLACK, FALSE, COLOR_BLACK);
	init_pair(BLACK_PIECE_ON_WHITE, FALSE, COLOR_WHITE);
	init_pair(BOARD_COLOR, COLOR_RED, COLOR_RED);
	init_pair(TEXT_COLOR, COLOR_BLACK, COLOR_BLACK);
	refresh();

	drawChessboard();

	move(0,0);
	getch();
	endwin();
	return 0;
}
