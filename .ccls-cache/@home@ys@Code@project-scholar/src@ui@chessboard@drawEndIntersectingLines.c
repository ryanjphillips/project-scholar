void drawEndIntersectingLines() {
	int startingX;

	for(startingX = BOARDSTARTINGXCOORD + BOARDTILEWIDTH; startingX <= BOARDENDINGXCOORD - BOARDTILEWIDTH; startingX += BOARDTILEWIDTH) {
		mvwaddch(stdscr, BOARDSTARTINGYCOORD, startingX, ACS_TTEE);
		mvwaddch(stdscr, BOARDENDINGYCOORD, startingX, ACS_BTEE);
	}
}
