void drawInnerIntersectingLines() {

	int startingY;
	int startingX;

	for(startingY= BOARDSTARTINGYCOORD + BOARDTILEHEIGHT; startingY<= BOARDENDINGYCOORD - BOARDTILEHEIGHT; startingY+= BOARDTILEHEIGHT) {	
		mvwaddch(stdscr, startingY, BOARDSTARTINGXCOORD, ACS_LTEE);
		mvwaddch(stdscr, startingY, BOARDENDINGXCOORD, ACS_RTEE);
		for(startingX = BOARDSTARTINGXCOORD + BOARDTILEWIDTH; startingX <= BOARDENDINGXCOORD - BOARDTILEWIDTH; startingX+= BOARDTILEWIDTH) {
			mvwaddch(stdscr, startingY, startingX, ACS_PLUS);
		}
	}

}
