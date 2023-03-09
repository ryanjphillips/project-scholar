void drawPhysicalNumberCoords() {

	int physicalCoordNumbs;
	int physicalYCoordNumb;
	const int PHYSICALXCOORDNUMB = BOARDSTARTINGXCOORD - 3; 

	for (physicalCoordNumbs = 0; physicalCoordNumbs < BOARDCOLUMNS; physicalCoordNumbs++) {

		physicalYCoordNumb = BOARDSTARTINGYCOORD + (physicalCoordNumbs) * BOARDTILEHEIGHT + BOARDTILEHEIGHT / 2;
		char currentColNumb = PHYSICALCORDNUMBERS[physicalCoordNumbs];
		mvwaddch(stdscr, physicalYCoordNumb , PHYSICALXCOORDNUMB, currentColNumb);
	}
}
