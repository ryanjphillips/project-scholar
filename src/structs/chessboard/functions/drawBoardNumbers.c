void drawBoardNumbers(Coords boardBeginning, int rowWidth, int rowCount) {
   int counter         = 0;
   int yCoord          = 0;
   int boardBeginningY = boardBeginning.yCoord;
   int boardBeginningX = boardBeginning.xCoord - 4;

   const char PHYSICALCOORDNUMBERS[9] = { '8', '7', '6', '5', '4', '3', '2', '1' };

   for (counter = 0; counter < rowCount; counter++) {
      yCoord = boardBeginningY + (rowWidth / 2) + (rowWidth * counter);
      mvwaddch(stdscr, yCoord, boardBeginningX, PHYSICALCOORDNUMBERS[counter]);
   }
}
