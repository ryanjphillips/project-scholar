void kingMovement(struct Tile *pTile, struct Piece *pKing) {
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

   //checkForCastle(pTile, pKing, 63);
   //checkForCastle(pTile, pKing, 56);

   printw("Can 63 Castle: %d\n", checkForCastle(pTile, pKing, 63));
   printw("Can 56 Castle: %d\n", checkForCastle(pTile, pKing, 56));
   //pTile[kingPosition].pPiece->hasMoved = 1;
}
