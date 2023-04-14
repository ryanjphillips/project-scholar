int checkForCastle(struct Tile *pTile, struct Piece *pPiece, int rookPosition) {
   // Return 1 if can castle
   // Return 0 if can't

   /*
      1) King and Rook has not moved.
      2) King is not in check.
      3) King does not pass through check (can't put king in check if castled)
      4) No pieces between the King and the Rook.
    */

   int kingPosition;
   int rookStringCompare;
   int counter;

   kingPosition = pPiece->position;

   // Check 1 - Check if King has moved.
   if (pPiece->hasMoved == 1) {
      return(0);
   }

   // Check 1 - Check if Rook has not moved.
   if (pTile[rookPosition].isEmpty == 0) {
      rookStringCompare = strcmp(pTile[rookPosition].pPiece->notation, "R");
      if (pTile[rookPosition].pPiece->hasMoved == 0 && rookStringCompare != 0) {
         return(0);
      }
   }
   else {
      return(0);
   }

   // Check 4 - Check if there are pieces between the King and the Rook.
   if (rookPosition > kingPosition) {
      for (counter = kingPosition + 1; counter < rookPosition; counter++) {
         //printw("Right: %d\n", counter);
         if (pTile[counter].isEmpty == 0) {
            return(0);
         }
      }
   }
   else {
      for (counter = kingPosition - 1; counter > rookPosition; counter--) {
         //printw("Left: %d\n", counter);
         if (pTile[counter].isEmpty == 0) {
            return(0);
         }
      }
   }

   return(1);
}
