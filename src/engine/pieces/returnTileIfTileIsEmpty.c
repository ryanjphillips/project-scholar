struct Tile *returnTileIfTileIsEmpty(struct Tile *pTile, int position) {

	if (pTile[position].isEmpty == 20) {
		return &pTile[position];
	}	
}
