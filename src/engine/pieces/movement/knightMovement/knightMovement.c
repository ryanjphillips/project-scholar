void knightMovement(struct Tile *pTile, struct Piece *pKnight) {
   int knightPosition;
   knightPosition = pKnight->position;
   int forwardMovement  = knightPosition + 16;
   int backwardMovement = knightPosition - 16;
   int rightMovement    = knightPosition + 8;
   int leftMovement     = knightPosition - 8;

   // Need to refacotr the checkForLegalMoves to include the checkIfNewPosition

   // Forward Attack (Up the board)
   if (checkIfNewPositionIsOffBoard(knightPosition - 16, backwardMovement + 1) == 0) {
      checkForLegalMoves(pTile, backwardMovement + 1);
   }

   if (checkIfNewPositionIsOffBoard(knightPosition - 16, backwardMovement - 1) == 0) {
      checkForLegalMoves(pTile, backwardMovement - 1);
   }

   // Backwards Attack
   if (checkIfNewPositionIsOffBoard(knightPosition + 16, forwardMovement + 1) == 0) {
      checkForLegalMoves(pTile, forwardMovement + 1);
   }

   if (checkIfNewPositionIsOffBoard(knightPosition + 16, forwardMovement - 1) == 0) {
      checkForLegalMoves(pTile, forwardMovement - 1);
   }


   // East Attack
   if (checkIfNewPositionIsOffBoard(knightPosition + 8, rightMovement + 2) == 0) {
      checkForLegalMoves(pTile, rightMovement + 2);
   }

   if (checkIfNewPositionIsOffBoard(knightPosition - 8, leftMovement + 2) == 0) {
      checkForLegalMoves(pTile, leftMovement + 2);
   }



   //West Attack
   if (checkIfNewPositionIsOffBoard(knightPosition + 8, rightMovement - 2) == 0) {
      checkForLegalMoves(pTile, rightMovement - 2);
   }

   if (checkIfNewPositionIsOffBoard(knightPosition - 8, leftMovement - 2) == 0) {
      checkForLegalMoves(pTile, leftMovement - 2);
   }
}
