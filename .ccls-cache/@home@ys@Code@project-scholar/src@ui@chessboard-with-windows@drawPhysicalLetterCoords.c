void drawPhysicalLetterCoords() {
	int physicalCoordLetters;
	int physicalXCoordLetter; 
	
	const int PHYSICALYCOORDLETTER = BOARDSTARTINGYCOORD + (BOARDTILEHEIGHT * BOARDCOLUMNS) + 2; 

	for (physicalCoordLetters = 0; physicalCoordLetters < BOARDCOLUMNS; physicalCoordLetters++) {

		physicalXCoordLetter = BOARDSTARTINGXCOORD + (physicalCoordLetters) * BOARDTILEWIDTH + BOARDTILEWIDTH / 2;
		char currentCol = PHYSICALCORDLETTERS[physicalCoordLetters];
		mvwaddch(stdscr, PHYSICALYCOORDLETTER, physicalXCoordLetter, currentCol);
	}

}
