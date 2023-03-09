#define _X_OPEN_SOURCE_EXTENEDED
#include <ncurses.h>
#include <locale.h>
#include <wchar.h>
#include "chessboard.h"
#include "chessboardColor.c"
#include "drawChessboard.c"
#include "drawPiece.c"

int main() {
	int endy, endx;
	int j,i,starty, startx, tile_width, tile_height, lines, cols; setlocale(LC_ALL, "");
	initscr();
	cbreak();
	noecho();
	clear();

	// Board Dimensions
	
	starty = 10;
	startx = 100;
	tile_width = 6;
	tile_height = 3;
	lines = 8;
	cols = 8;

	endy = starty + lines * tile_height;
	endx = startx + cols  * tile_width;

	start_color();
	init_pair(BLACK_SQUARE, COLOR_CYAN, COLOR_CYAN);
	init_pair(WHITE_SQUARE, COLOR_WHITE, COLOR_WHITE); 
	init_pair(WHITE_PIECE_ON_BLACK, FALSE, COLOR_BLACK);
	init_pair(WHITE_PIECE_ON_WHITE, FALSE, COLOR_WHITE);
	init_pair(BLACK_PIECE_ON_BLACK, FALSE, COLOR_BLACK);
	init_pair(BLACK_PIECE_ON_WHITE, FALSE, COLOR_WHITE);

	drawChessboard();
	//chessboardColor();
	drawPiece(0, 0, BLACKROOK, BLACK_PIECE_ON_WHITE);

	for(j = starty + tile_height; j <= endy - tile_height; j += tile_height) {	
		mvwaddch(stdscr, j, startx, ACS_LTEE);
		mvwaddch(stdscr, j, endx, ACS_RTEE);
		for(i = startx + tile_width; i <= endx - tile_width; i += tile_width) {
			mvwaddch(stdscr, j, i, ACS_PLUS);
		}
	}

	for(i = startx + tile_width; i <= endx - tile_width; i += tile_width) {
		mvwaddch(stdscr, starty, i, ACS_TTEE);
		mvwaddch(stdscr, endy, i, ACS_BTEE);
	}


	int printChessCords;
	int printChessCordsX; 
	int printChessCordsY;

	for (printChessCords = 0; printChessCords < 8; printChessCords++) {

		// int tempy = y + (count - 1) * h + h  / 2;
		printChessCordsX = startx + (printChessCords) * tile_width + tile_width / 2;
		printChessCordsY = starty + (tile_height * 8) + 2; 
		char currentCol = PHYSICALCORDLETTERS[printChessCords];
		mvwaddch(stdscr, printChessCordsY, printChessCordsX, currentCol);

	}

	int printChessCordsNumbs;
	int printChessCordsNumbsX; 
	int printChessCordsNumbsY;

	for (printChessCordsNumbs = 0; printChessCordsNumbs < 8; printChessCordsNumbs++) {

		// int tempy = y + (count - 1) * h + h  / 2;
		printChessCordsNumbsY = starty + (printChessCordsNumbs) * tile_height + tile_height / 2;
		printChessCordsNumbsX = startx - 3; 
		char currentColNumb = PHYSICALCORDNUMBERS[printChessCordsNumbs];
		mvwaddch(stdscr, printChessCordsNumbsY, printChessCordsNumbsX, currentColNumb);

	}

	// closing functions
	
	wrefresh(stdscr);
	refresh();
	getch();
	endwin();

	return 0;
}
