#include <ncurses.h>
#include "chessboard.h"
#include "createWindow.c"
#include "determineWindowBackgroundColor.c"

int main() {
	setlocale(LC_ALL, "");
	initscr();
	cbreak();
	noecho();
	clear();

	start_color();
	use_default_colors();
	init_pair(BLACK_SQUARE, COLOR_CYAN, COLOR_CYAN);
	init_pair(WHITE_SQUARE, COLOR_WHITE, COLOR_WHITE); 
	init_pair(WHITE_PIECE_ON_BLACK, FALSE, COLOR_BLACK);
	init_pair(WHITE_PIECE_ON_WHITE, FALSE, COLOR_WHITE);
	init_pair(BLACK_PIECE_ON_BLACK, FALSE, COLOR_BLACK);
	init_pair(BLACK_PIECE_ON_WHITE, FALSE, COLOR_WHITE);
	init_color(COLOR_RED, 0,1000,0);
	init_pair(BOARD_COLOR, COLOR_RED, COLOR_RED);
	refresh();

	WINDOW *chessBoard[64];
	WINDOW *physicalBoard;

	int middleOfScreenRows = LINES / 2;
	int middleOfScreenColumns = COLS / 2; 


	physicalBoard = createWindow(BOARDTILEHEIGHT * 8 + 10, BOARDTILEWIDTH * 8 + 25, BOARDSTARTINGYCOORD - 5, BOARDSTARTINGXCOORD - 12);   
	wbkgd(physicalBoard, COLOR_PAIR(init_color(COLOR_RED, 0, 1000, 0)));
	wrefresh(physicalBoard);

	int boardRow;
	int boardColumn;
	int counter;
	int backgroundColorPair;

	counter = 0;
	for (boardColumn = 0; boardColumn < 8; boardColumn++) {
		for (boardRow = 0; boardRow < 8; boardRow++) {

			backgroundColorPair = determineWindowBackgroundColor(boardColumn, boardRow);
			int yPos = middleOfScreenRows - (BOARDTILEHEIGHT * 8) / 2 + (boardColumn * BOARDTILEHEIGHT);
		  int xPos = middleOfScreenColumns - (BOARDTILEWIDTH * 8) / 2  + (boardRow * BOARDTILEWIDTH);	
			chessBoard[counter] = createWindow(BOARDTILEHEIGHT, BOARDTILEWIDTH, yPos, xPos);
			wbkgd(chessBoard[counter], COLOR_PAIR(backgroundColorPair));
		  wrefresh(chessBoard[counter]);
			counter = counter + 1;
		}
	}

	move(0,0);
	getch();
	endwin();
	return 0;
}
