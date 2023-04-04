int rookLegalTiles(struct Tile *pTile, int position) {
	char pieceColor[30];
	int determinePieceColor;

	if (position > -1 && position < 64) {
		if (pTile[position].isEmpty == 0) {

			strcpy(pieceColor, pTile[position].pPiece->blackOrWhite);
			determinePieceColor = strcmp(pieceColor, "White");
			if (determinePieceColor != 0) {

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
