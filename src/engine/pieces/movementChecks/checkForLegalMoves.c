int checkForLegalMoves(struct Tile *pTile, int position ) {

	if (position > -1 && position < 64) {
		if (pTile[position].isEmpty == 0) {
	    
			int isPieceColorBlack = checkIfPieceIsWhite(pTile[position].pPiece->blackOrWhite); 

			if (isPieceColorBlack != 0) {

				displayLegalMoves(&pTile[position]);
			} 

			return 0;
		} else {

			displayLegalMoves(&pTile[position]);
			return 1;
		} 
	}
	return 0;
}
