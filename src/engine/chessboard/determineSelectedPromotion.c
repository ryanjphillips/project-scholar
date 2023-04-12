int determineSelectedPromotion(struct Tile *pTile, int mouseYCoord, int mouseXCoord) {
   const int PROMOTION_TILES = 4;
   int       tileCounter;

   for (tileCounter = 0; tileCounter < PROMOTION_TILES; tileCounter++) {
      if ((mouseYCoord >= pTile[tileCounter].beginningY && mouseYCoord < pTile[tileCounter].endingY) && mouseXCoord >= pTile[tileCounter].beginningX && mouseXCoord < pTile[tileCounter].endingX) {
         return(tileCounter);
      }
   }
   return(-1);
}
