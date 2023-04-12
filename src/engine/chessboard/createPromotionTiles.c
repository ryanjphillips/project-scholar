void createPromotionTiles(struct Tile *pTile, WINDOW **pWindowArray, int arraySize) {
   int          counter;
   int          windowBegX         = 0;
   int          windowBegY         = 0;
   int          windowEndX         = 0;
   int          windowEndY         = 0;
   struct Piece promotionPieces[4] =
   {
      { "White Queen",  WHITEQUEEN,  0, 9, "White", "Q", true },
      { "White Knight", WHITEKNIGHT, 1, 3, "White", "N", true },
      { "White Rook",   WHITEROOK,   2, 5, "White", "R", true },
      { "White Bishop", WHITEBISHOP, 3, 3, "White", "B", true }
   };

   for (counter = 0; counter < arraySize; counter++) {
      getbegyx(pWindowArray[counter], windowBegY, windowBegX);
      getmaxyx(pWindowArray[counter], windowEndY, windowEndX);

      printw("%d\n", *promotionPieces[counter].name);
      //pTile[counter].pPiece->name = promotionPieces[counter].name;

      pTile[counter].beginningY = windowBegY;
      pTile[counter].beginningX = windowBegX;
      pTile[counter].endingY    = windowBegY + windowEndY;
      pTile[counter].endingX    = windowBegX + windowEndX;
      pTile[counter].pWindow    = pWindowArray[counter];
      pTile[counter].middleY    = pTile[counter].endingY / 2;
      pTile[counter].middleX    = pTile[counter].endingX / 2;

      mvwaddstr(pTile[counter].pWindow, pTile[counter].middleY, pTile[counter].middleY, pTile[counter].pPiece->character);
   }
}
