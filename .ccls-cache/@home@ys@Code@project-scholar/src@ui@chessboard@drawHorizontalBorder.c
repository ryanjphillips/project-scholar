#include "chessboard.h"

void drawHorizontalBorders() {

	int topBorder;
	int topBorderX;
	int topBorderY;
	int bottomBorderX;
	int bottomBorderY;
	int horizontalBorders;

	for (horizontalBorders = 0; horizontalBorders < (BOARDTILEWIDTH * BOARDCOLUMNS) + 12; horizontalBorders++) {

		topBorderX = BOARDSTARTINGXCOORD + horizontalBorders - 6;
		topBorderY = BOARDSTARTINGYCOORD - 3;
		mvwaddch(stdscr, topBorderY, topBorderX, ACS_HLINE);

		bottomBorderX = BOARDSTARTINGXCOORD + horizontalBorders - 6;
		bottomBorderY = (BOARDSTARTINGYCOORD * BOARDTILEHEIGHT + BOARDTILEHEIGHT) + 4;
		mvwaddch(stdscr, bottomBorderY, bottomBorderX, ACS_HLINE);
	}
}
