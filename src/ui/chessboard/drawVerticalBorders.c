void drawVerticalBorders() {
	
	int leftBorderY;
	int verticalBorderY;
	int verticalBorder;
	int rightBorderY;

	const int RIGHTBORDERX = BOARDSTARTINGXCOORD + BOARDTILEWIDTH * BOARDCOLUMNS + 6;
	const int LEFTBORDERX = BOARDSTARTINGXCOORD - 7;

	for (verticalBorder = 0; verticalBorder < (BOARDTILEHEIGHT * BOARDCOLUMNS) + 5; verticalBorder++) {

		verticalBorderY = BOARDSTARTINGYCOORD + verticalBorder - 2;
		mvwaddch(stdscr, verticalBorderY, LEFTBORDERX, ACS_VLINE);
		mvwaddch(stdscr, verticalBorderY, RIGHTBORDERX, ACS_VLINE);
	}
}
