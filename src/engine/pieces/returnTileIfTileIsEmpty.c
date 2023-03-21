struct Tile *returnTileIfTileIsEmpty(struct Tile *pTile, int position) {

	_Bool hasPiece;
	hasPiece = pTile[position].isEmpty;

	if (hasPiece == false) {

		return pTile[position];
	}
}
