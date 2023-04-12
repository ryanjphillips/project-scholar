int determineSelectedTile(struct Tile *pTile, int mouseYCoord, int mouseXCoord) {
   const int BOARDSIZE = 64;
   int       tileCounter;

   for (tileCounter = 0; tileCounter < BOARDSIZE; tileCounter++) {
      if ((mouseYCoord >= pTile[tileCounter].beginningY && mouseYCoord < pTile[tileCounter].endingY) && mouseXCoord >= pTile[tileCounter].beginningX && mouseXCoord < pTile[tileCounter].endingX) {
         return(tileCounter);
      }
   }
   return(-1);
}
