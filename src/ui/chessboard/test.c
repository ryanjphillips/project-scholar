#define _X_OPEN_SOURCE_EXTENEDED
#include <ncurses.h>
#include <stdio.h>
#include <locale.h>
#include <wchar.h>

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
	init_pair(1, COLOR_CYAN, COLOR_CYAN);
	init_pair(2, COLOR_CYAN, COLOR_CYAN); 
	init_pair(3, COLOR_WHITE, COLOR_WHITE); 

	int startingX, startingY;
	int u, l;
	int chessColumns, chessRows;
	int checkcardColor;

	for (chessColumns = 0; chessColumns < 8; chessColumns++) {
		for (chessRows = 0; chessRows < 8; chessRows++) {
					// If the Current Row is an even row
					if ( chessRows % 2 == 0) {
						if (chessColumns % 2 != 0) {

							checkcardColor = 2;
						} else {

							checkcardColor = 3;
						} 

					// If the Current Row is an odd row
					} else if (chessRows % 2 != 0) {
						if (chessColumns % 2 != 0) {
							checkcardColor = 3;
						} else {

							checkcardColor = 2;
						} 
					} 

			for ( u = 0; u < tile_height; u++) {
				for (l = 0; l < tile_width; l++) {
					attron(COLOR_PAIR(checkcardColor));
					startingX = startx + chessRows * tile_width + l;
					startingY = starty + chessColumns * tile_height + u; 
					mvaddstr(startingY, startingX, " ");
					attroff(COLOR_PAIR(checkcardColor));
					
				}
			}
		}
	}

	int pX, pY;
	// TOP LEFT ROOK
	
	init_pair(3, FALSE, COLOR_WHITE);
	attron(COLOR_PAIR(3));
	pX = startx + 0 * tile_width + tile_width / 2;
	pY = starty + 0 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x9F");
	attroff(COLOR_PAIR(3));

	/* 
	// Black Pieces
	// TOP LEFT ROOK
	pX = startx + 0 * tile_width + tile_width / 2;
	pY = starty + 0 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x96");

	// TOP LEFT Knight
	pX = startx + 1 * tile_width + tile_width / 2;
	pY = starty + 0 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x98");

	// TOP LEFT Bishop 
	pX = startx + 2 * tile_width + tile_width / 2;
	pY = starty + 0 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x97");

	// TOP LEFT KING
	pX = startx + 3 * tile_width + tile_width / 2;
	pY = starty + 0 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x95");

	// TOP LEFT Queen
	pX = startx + 4 * tile_width + tile_width / 2;
	pY = starty + 0 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x94");

	// TOP LEFT Bishop
	pX = startx + 5 * tile_width + tile_width / 2;
	pY = starty + 0 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x97");

	// TOP LEFT Knight
	pX = startx + 6 * tile_width + tile_width / 2;
	pY = starty + 0 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x98");

	// TOP LEFT ROOK
	pX = startx + 7 * tile_width + tile_width / 2;
	pY = starty + 0 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x96");


	
	// TOP LEFT ROOK
	pX = startx + 0 * tile_width + tile_width / 2;
	pY = starty + 1 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x99");


	// TOP LEFT ROOK
	pX = startx + 1 * tile_width + tile_width / 2;
	pY = starty + 1 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x99");

	// TOP LEFT ROOK
	pX = startx + 2 * tile_width + tile_width / 2;
	pY = starty + 1 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x99");

	// TOP LEFT ROOK
	pX = startx + 3 * tile_width + tile_width / 2;
	pY = starty + 1 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x99");

	// TOP LEFT ROOK
	pX = startx + 4 * tile_width + tile_width / 2;
	pY = starty + 1 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x99");

	// TOP LEFT ROOK
	pX = startx + 5 * tile_width + tile_width / 2;
	pY = starty + 1 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x99");

	// TOP LEFT ROOK
	pX = startx + 6 * tile_width + tile_width / 2;
	pY = starty + 1 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x99");

	// TOP LEFT ROOK
	pX = startx + 7 * tile_width + tile_width / 2;
	pY = starty + 1 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x99");


	// White Pieces
	// TOP LEFT ROOK
	pX = startx + 0 * tile_width + tile_width / 2;
	pY = starty + 7 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x9C");

	// TOP LEFT Bishop
	pX = startx + 1 * tile_width + tile_width / 2;
	pY = starty + 7 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x9E");

	// TOP LEFT Knight
	pX = startx + 2 * tile_width + tile_width / 2;
	pY = starty + 7 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x9D");

	// TOP LEFT KING
	pX = startx + 3 * tile_width + tile_width / 2;
	pY = starty + 7 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x9B");

	// TOP LEFT Queen
	pX = startx + 4 * tile_width + tile_width / 2;
	pY = starty + 7 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x9A");

	// TOP LEFT Knight
	pX = startx + 5 * tile_width + tile_width / 2;
	pY = starty + 7 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x9D");

	// TOP LEFT Bishop
	pX = startx + 6 * tile_width + tile_width / 2;
	pY = starty + 7 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x9E");

	// TOP LEFT ROOK
	pX = startx + 7 * tile_width + tile_width / 2;
	pY = starty + 7 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x9C");


	// PAWNS
	pX = startx + 0 * tile_width + tile_width / 2;
	pY = starty + 6 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x9F");

	pX = startx + 1 * tile_width + tile_width / 2;
	pY = starty + 6 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x9F");

	pX = startx + 2 * tile_width + tile_width / 2;
	pY = starty + 6 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x9F");

	pX = startx + 3 * tile_width + tile_width / 2;
	pY = starty + 6 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x9F");

	pX = startx + 4 * tile_width + tile_width / 2;
	pY = starty + 6 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x9F");

	pX = startx + 5 * tile_width + tile_width / 2;
	pY = starty + 6 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x9F");

	pX = startx + 6 * tile_width + tile_width / 2;
	pY = starty + 6 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x9F");

	pX = startx + 7 * tile_width + tile_width / 2;
	pY = starty + 6 * tile_height + tile_height / 2;
	mvaddstr(pY, pX, "\xE2\x99\x9F");

	*/

	// Draws all the horizontal straight lines
	
	for(j = starty; j <= endy; j += tile_height) {
		for(i = startx; i <= endx; ++i) {
			//init_pair(5, COLOR_YELLOW, COLOR_YELLOW);
			//attron(COLOR_PAIR(5));
			mvwaddch(stdscr, j, i, ACS_HLINE);
			//attroff(COLOR_PAIR(5));
	 }
	}

	// Draws all vertical straight lines
	// Aswell, draws all corners 

	for(i = startx; i <= endx; i += tile_width) {
		for(j = starty; j <= endy; ++j) {
			mvwaddch(stdscr, j, i, ACS_VLINE);
		}

	  mvwaddch(stdscr, starty, startx, ACS_ULCORNER);
	  mvwaddch(stdscr, endy, startx, ACS_LLCORNER);
	  mvwaddch(stdscr, starty, endx, ACS_URCORNER);
	  mvwaddch(stdscr, 	endy, endx, ACS_LRCORNER);
	}

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

	// Draw Top Horizontal Border 
	
	int topBorder;
	int topBorderX;
	int topBorderY;

	for (topBorder = 0; topBorder < (tile_width * 8) + 12; topBorder++) {

		topBorderX = startx + topBorder - 6;
		topBorderY = starty - 3;
		mvwaddch(stdscr, topBorderY, topBorderX, ACS_HLINE);
	}

	// Draw Bottom Horizontal Border 
	
	int bottomBorder;
	int bottomBorderX;
	int bottomBorderY;

	for (bottomBorder = 0; bottomBorder < (tile_width * 8) + 12; bottomBorder++) {

		bottomBorderX = startx + bottomBorder - 6;
		bottomBorderY = (starty * tile_height + tile_height) + 4;
		mvwaddch(stdscr, bottomBorderY, bottomBorderX, ACS_HLINE);
	}

	// Draw Left Vertical Border 
	
	int leftBorder;
	int leftBorderX;
	int leftBorderY;

	for (leftBorder = 0; leftBorder < (tile_height * 8) + 5; leftBorder++) {

		leftBorderX = startx - 7;
		leftBorderY = starty + leftBorder - 2;
		mvwaddch(stdscr, leftBorderY, leftBorderX, ACS_VLINE);
	}

	// Draw Right Vertical Border 
	
	int rightBorder;
	int rightBorderX;
	int rightBorderY;

	for (rightBorder = 0; rightBorder < (tile_height * 8) + 5; rightBorder++) {

		rightBorderX = startx + tile_width * 8 + 6;
		rightBorderY = starty + rightBorder - 2;
		mvwaddch(stdscr, rightBorderY, rightBorderX, ACS_VLINE);
	}

	char chessCords[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'} ;
	int printChessCords;
	int printChessCordsX; 
	int printChessCordsY;

	for (printChessCords = 0; printChessCords < 8; printChessCords++) {

		// int tempy = y + (count - 1) * h + h  / 2;
		printChessCordsX = startx + (printChessCords) * tile_width + tile_width / 2;
		printChessCordsY = starty + (tile_height * 8) + 2; 
		char currentCol = chessCords[printChessCords];
		mvwaddch(stdscr, printChessCordsY, printChessCordsX, currentCol);

	}

	char chessCordsNumbs[] = {'1', '2', '3', '4', '5', '6', '7', '8'} ;
	int printChessCordsNumbs;
	int printChessCordsNumbsX; 
	int printChessCordsNumbsY;

	for (printChessCordsNumbs = 0; printChessCordsNumbs < 8; printChessCordsNumbs++) {

		// int tempy = y + (count - 1) * h + h  / 2;
		printChessCordsNumbsY = starty + (printChessCordsNumbs) * tile_height + tile_height / 2;
		printChessCordsNumbsX = startx - 3; 
		char currentColNumb = chessCordsNumbs[printChessCordsNumbs];
		mvwaddch(stdscr, printChessCordsNumbsY, printChessCordsNumbsX, currentColNumb);

	}



	// closing functions
	
	wrefresh(stdscr);
	refresh();
	getch();
	endwin();

	return 0;
}
