void drawBoardLetters(Coords boardBottomLeft, int columnLength, int columnCount) {
   int counter          = 0;
   int xCoord           = 0;
   int boardBottomLeftY = boardBottomLeft.yCoord + 2;
   int boardBottomLeftX = boardBottomLeft.xCoord;

   const char PHYSICALCOORDLETTERS[9] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H' };

   for (counter = 0; counter < columnCount; counter++) {
      xCoord = boardBottomLeftX + (columnLength / 2) + (columnLength * counter);
      mvwaddch(stdscr, boardBottomLeftY, xCoord, PHYSICALCOORDLETTERS[counter]);
   }
}
