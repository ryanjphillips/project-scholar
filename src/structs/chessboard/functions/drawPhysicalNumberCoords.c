void drawPhysicalNumberCoords() {

	int physicalCoordNumbs;
	int physicalYCoordNumb;
	const int BOARDSTARTINGXCOORD = COLS / 2;
	const int BOARDSTARTINGYCOORD = LINES / 2;
	const int PHYSICALXCOORDNUMB = BOARDSTARTINGXCOORD - BOARDTILELENGTH ; 

	for (physicalCoordNumbs = 0; physicalCoordNumbs < BOARDCOLUMNS; physicalCoordNumbs++) {

		physicalYCoordNumb = BOARDSTARTINGYCOORD + (physicalCoordNumbs) * BOARDTILELENGTH + BOARDTILELENGTH / 2;
		char currentColNumb = PHYSICALCORDNUMBERS[physicalCoordNumbs];
		mvwaddch(stdscr, physicalYCoordNumb , PHYSICALXCOORDNUMB, currentColNumb);
	}
}
