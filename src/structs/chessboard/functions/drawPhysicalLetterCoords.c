void drawPhysicalLetterCoords() {
   int       physicalCoordLetters;
   int       physicalXCoordLetter;
   const int BOARDSTARTINGYCOORD = LINES / 2;
   const int BOARDSTARTINGXCOORD = COLS / 2;

   const int PHYSICALYCOORDLETTER = BOARDSTARTINGYCOORD + BOARDLENGTH + 2;

   for (physicalCoordLetters = 0; physicalCoordLetters < BOARDCOLUMNS; physicalCoordLetters++) {
      physicalXCoordLetter = BOARDSTARTINGXCOORD + (physicalCoordLetters) * BOARDTILEWIDTH + BOARDTILEWIDTH / 2;
      char currentCol = PHYSICALCORDLETTERS[physicalCoordLetters];
      mvwaddch(stdscr, PHYSICALYCOORDLETTER, physicalXCoordLetter, currentCol);
   }
}
