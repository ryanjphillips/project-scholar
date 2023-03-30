struct Tile *returnTileIfTileIsEmpty(struct Tile *pTile, int position) {

	if (pTile[position].isEmpty == 1) {
		return &pTile[position];
	}	
}
