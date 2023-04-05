void kingMovement(struct Tile *pTile, struct Piece *pKing) {
	
	int kingPosition;

	kingPosition = pKing->position;

	if (checkIfNewPositionIsOffBoard(kingPosition  + 8, kingPosition + 8) == 0) {

		checkForLegalMoves(pTile, kingPosition + 8);
	}

	if (checkIfNewPositionIsOffBoard(kingPosition  - 8, kingPosition - 8) == 0) {

		checkForLegalMoves(pTile, kingPosition - 8);
	}

	if (checkIfNewPositionIsOffBoard(kingPosition  + 8 + 1, kingPosition + 8 + 1) == 0) {

		checkForLegalMoves(pTile, kingPosition + 8 + 1);
	}

	if (checkIfNewPositionIsOffBoard(kingPosition  + 8 - 1, kingPosition + 8 - 1) == 0) {

		checkForLegalMoves(pTile, kingPosition + 8 - 1);
	}

	if (checkIfNewPositionIsOffBoard(kingPosition  + 1, kingPosition + 1) == 0) {

		checkForLegalMoves(pTile, kingPosition + 1);
	}

	if (checkIfNewPositionIsOffBoard(kingPosition  - 1, kingPosition - 1) == 0) {

		checkForLegalMoves(pTile, kingPosition - 1);
	}

	if (checkIfNewPositionIsOffBoard(kingPosition  - 8 - 1, kingPosition - 8 - 1) == 0) {

		checkForLegalMoves(pTile, kingPosition - 8 - 1);
	}

	if (checkIfNewPositionIsOffBoard(kingPosition  - 8 + 1, kingPosition - 8 + 1) == 0) {

		checkForLegalMoves(pTile, kingPosition - 8 + 1);
	}
}
