void drawLegalTileIfEmpty(struct Tile *pTile, int position) {

	if (pTile[position].isEmpty == 1) {
		displayLegalMoves(&pTile[position]);
	}	
}
