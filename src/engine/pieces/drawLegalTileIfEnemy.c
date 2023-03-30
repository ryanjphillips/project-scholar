void drawLegalTileIfEnemy(struct Tile *pTile, int position) {
	char pieceColor[30];
	int determinePieceColor;

	if (pTile[position].isEmpty == 0) {
	  strcpy(pieceColor, pTile[position].pPiece->blackOrWhite);
	  determinePieceColor = strcmp(pieceColor, "White");
		if (determinePieceColor != 0) {

		  displayLegalMoves(&pTile[position]);
		}
	}
}
