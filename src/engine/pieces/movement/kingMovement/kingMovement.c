void kingMovement(struct Tile *pTile, struct Piece *pKing, int selectedTile, int previousTile) {
   int kingPosition;

   kingPosition = pKing->position;

   if (checkIfNewPositionIsOffBoard(kingPosition + 8, kingPosition + 8) == 0) {
      checkForLegalMoves(pTile, kingPosition + 8);
   }

   if (checkIfNewPositionIsOffBoard(kingPosition - 8, kingPosition - 8) == 0) {
      checkForLegalMoves(pTile, kingPosition - 8);
   }

   if (checkIfNewPositionIsOffBoard(kingPosition + 8 + 1, kingPosition + 8 + 1) == 0) {
      checkForLegalMoves(pTile, kingPosition + 8 + 1);
   }

   if (checkIfNewPositionIsOffBoard(kingPosition + 8 - 1, kingPosition + 8 - 1) == 0) {
      checkForLegalMoves(pTile, kingPosition + 8 - 1);
   }

   if (checkIfNewPositionIsOffBoard(kingPosition + 1, kingPosition + 1) == 0) {
      checkForLegalMoves(pTile, kingPosition + 1);
   }

   if (checkIfNewPositionIsOffBoard(kingPosition - 1, kingPosition - 1) == 0) {
      checkForLegalMoves(pTile, kingPosition - 1);
   }

   if (checkIfNewPositionIsOffBoard(kingPosition - 8 - 1, kingPosition - 8 - 1) == 0) {
      checkForLegalMoves(pTile, kingPosition - 8 - 1);
   }

   if (checkIfNewPositionIsOffBoard(kingPosition - 8 + 1, kingPosition - 8 + 1) == 0) {
      checkForLegalMoves(pTile, kingPosition - 8 + 1);
   }

   //Right Castle

   if (checkForCastle(pTile, pKing, 63)) {
      displayLegalMoves(&pTile[62]);

   if (pTile[62].isEmpty == 0) { 
      addPieceToTileSingle(pTile, 60, 63);
      removePieceFromTile(&pTile[63]);
  
      }
   }

   // Left Castle
   if (checkForCastle(pTile, pKing, 56)) {
      displayLegalMoves(&pTile[58]);

      if (pTile[58].isEmpty == 0) {
         addPieceToTileSingle(pTile, 59, 56);
         removePieceFromTile(&pTile[56]);
      }
   }
}
