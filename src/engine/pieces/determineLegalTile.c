int determineLegalTile(struct Tile *pTile, int position) {
	char pieceColor[30];
	int determinePieceColor;

	// Else if the tile isn't empty we need to check for the correct piece, a white piece cannot move through a white piece.
	
	if (pTile[position].isEmpty == 0) {

	  strcpy(pieceColor, pTile[position].pPiece->blackOrWhite);
	  determinePieceColor = strcmp(pieceColor, "White");

		if (determinePieceColor != 0) {
		  displayLegalMoves(&pTile[position]);
			return 1;
		}
	} else if (pTile[position].isEmpty == 1) {
		displayLegalMoves(&pTile[position]);
		return 0;
	} 
}
