void bishopMovement(struct Tile *pTile, struct Piece *pBishop) {
   int northEastDiagonal = 1;
   int southEastDiagonal = 1;
   int southWestDiagonal = 1;
   int northWestDiagonal = 1;
   int columnPosition;
   int northEastCounter = 0;
   int southEastCounter = 0;
   int northWestCounter = 0;
   int southWestCounter = 0;
   int bishopPosition;
   int northEastNewPosition = 0;
   int northWestNewPosition = 0;
   int southEastNewPosition = 0;
   int southWestNewPosition = 0;

   bishopPosition = pBishop->position;
   columnPosition = bishopPosition % 8;

   while (northEastDiagonal != 0 || northWestDiagonal != 0 || southEastDiagonal != 0 || southWestDiagonal != 0) {
      // North East
      if (northEastDiagonal != 0) {
         northEastCounter     = northEastCounter + 1;
         northEastNewPosition = (8 * -1 * northEastCounter) + (northEastCounter);

         if (northEastCounter + columnPosition >= 8) {
            northEastDiagonal = 0;
         }
         else {
            northEastDiagonal = checkForLegalMoves(pTile, bishopPosition + northEastNewPosition);
         }
      }

      // North West
      if (northWestDiagonal != 0) {
         northWestCounter     = northWestCounter - 1;
         northWestNewPosition = 8 * -1 * northWestCounter + (northWestCounter);

         if (northWestCounter + columnPosition < 0) {
            northWestDiagonal = 0;
         }
         else {
            northWestDiagonal = checkForLegalMoves(pTile, bishopPosition + northWestNewPosition);
         }
      }

      // South East
      if (southEastDiagonal != 0) {
         southEastCounter     = southEastCounter + 1;
         southEastNewPosition = 8 * southEastCounter + southEastCounter;


         if (southEastCounter + columnPosition >= 8) {
            southEastDiagonal = 0;
         }
         else {
            southEastDiagonal = checkForLegalMoves(pTile, bishopPosition + southEastNewPosition);
         }
      }

      // South West
      if (southWestDiagonal != 0) {
         southWestCounter     = southWestCounter - 1;
         southWestNewPosition = 8 * southWestCounter + southWestCounter;

         if (southWestCounter + columnPosition < 0) {
            southWestDiagonal = 0;
         }
         else {
            southWestDiagonal = checkForLegalMoves(pTile, bishopPosition + southWestNewPosition);
         }
      }
   }
}
