void drawHorizontalLines() {

	int startingXCoord;
	int startingYCoord;

	for(startingYCoord = BOARDSTARTINGYCOORD; startingYCoord <= BOARDENDINGYCOORD ; startingYCoord += BOARDTILEHEIGHT) {
		for(startingXCoord = BOARDSTARTINGXCOORD; startingXCoord <= BOARDENDINGXCOORD; ++startingXCoord) {
			mvwaddch(stdscr, startingYCoord, startingXCoord, ACS_HLINE);
	 }
	}
}
