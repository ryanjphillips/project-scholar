void drawHorizontalBorders() {

	int horizontalBorderX;
	int horizontalBorders;

	const int TOPBORDERY = BOARDSTARTINGYCOORD - 3;
	const int BOTTOMBORDERY = (BOARDSTARTINGYCOORD * BOARDTILEHEIGHT + BOARDTILEHEIGHT) + 4;

	for (horizontalBorders = 0; horizontalBorders < (BOARDTILEWIDTH * BOARDCOLUMNS) + 12; horizontalBorders++) {

		horizontalBorderX = BOARDSTARTINGXCOORD + horizontalBorders - 6;
		mvwaddch(stdscr, TOPBORDERY, horizontalBorderX, ACS_HLINE);
		mvwaddch(stdscr, BOTTOMBORDERY, horizontalBorderX, ACS_HLINE);
	}
}
