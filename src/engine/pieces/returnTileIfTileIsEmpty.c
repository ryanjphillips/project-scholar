struct Tile *returnTileIfTileIsEmpty(struct Tile *pTile, int position) {

	if (pTile[position].isEmpty) {
		return &pTile[position];
	}	
}
