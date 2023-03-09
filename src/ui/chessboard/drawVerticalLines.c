void drawVerticalLines() {

	int startingX;
	int startingY;

	for(startingX = BOARDSTARTINGXCOORD; startingX <= BOARDENDINGXCOORD; startingX += BOARDTILEWIDTH) {
		for(startingY = BOARDSTARTINGYCOORD; startingY <= BOARDENDINGYCOORD; ++startingY) {
			mvwaddch(stdscr, startingY, startingX, ACS_VLINE);
		}

	  mvwaddch(stdscr, BOARDSTARTINGYCOORD, BOARDSTARTINGXCOORD, ACS_ULCORNER);
	  mvwaddch(stdscr, BOARDENDINGYCOORD, BOARDSTARTINGXCOORD, ACS_LLCORNER);
	  mvwaddch(stdscr, BOARDSTARTINGYCOORD, BOARDENDINGXCOORD, ACS_URCORNER);
	  mvwaddch(stdscr, 	BOARDENDINGYCOORD, BOARDENDINGXCOORD, ACS_LRCORNER);
	}
}
