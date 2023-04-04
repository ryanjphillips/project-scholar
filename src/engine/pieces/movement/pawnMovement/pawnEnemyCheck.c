void pawnEnemyCheck(struct Tile *pTile, int position, int newPosition) {

	if (pTile[newPosition].isEmpty == 0) {
		int isPieceColorBlack = checkIfPieceIsWhite(pTile[newPosition].pPiece->blackOrWhite); 
		
		int isOffBoard = checkIfPawnPositionIsOffBoard(position, newPosition);

		if (isPieceColorBlack != 0 && isOffBoard == 0) {
		  displayLegalMoves(&pTile[newPosition]);
		}
	}
}
