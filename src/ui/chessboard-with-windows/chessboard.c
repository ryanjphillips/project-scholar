#include <ncurses.h>
#include "chessboard.h"
#include "createWindow.c"

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
	refresh();

	WINDOW *chessBoard[64];

	int i, j;
	int counter;
	counter = 0;
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {

			int yPos = BOARDSTARTINGYCOORD + i * BOARDTILEHEIGHT;
		  int xPos = BOARDSTARTINGXCOORD + j * BOARDTILEWIDTH;	

			chessBoard[counter] = createWindow(BOARDTILEHEIGHT, BOARDTILEWIDTH, yPos, xPos);
			counter = counter + 1;

		}
	}

	int k;
	for (k = 0; k <= 64; k++) {
		wrefresh(chessBoard[k]);
	}

	getch();
	endwin();
	return 0;
}
