void rookMovement(struct Tile *pTile, struct Piece *pRook) {

	int northColumn = 1;
	int southColumn = 1;
	int eastColumn = 1; int westColumn = 1; int northIncrement = 8; int southIncrement = -8;
	int eastIncrement = 1;
	int westIncrement = -1;
	int startOfRow;
	int startOfColumn;
	int rookPosition;
	int postionCounter = 1;


	rookPosition = pRook->position;
	startOfRow = rookPosition - (rookPosition % 8);
	// startOfColumn = (rookPosition % 8);

	while (northColumn != 0 && southColumn  != 0 && eastColumn != 0 && westColumn != 0) {

		// North 
		if (northColumn != 0 && rookPosition % 8 - northIncrement >= 0) {
			northColumn = determineLegalTile(pTile, rookPosition + 8);
		}

		// East 
		if (eastColumn != 0 && rookPosition + eastIncrement < startOfRow + 8) {
			eastColumn = determineLegalTile(pTile, rookPosition + 1);
		}

		// South 
		if (southColumn != 0 && rookPosition % 8 + southIncrement < 8) {
			southColumn = determineLegalTile(pTile, rookPosition - 8);
		}

		// West 
		if (westColumn != 0 && rookPosition - westIncrement > startOfRow) {
			westColumn = determineLegalTile(pTile, rookPosition - 1);
		}

		northIncrement = northIncrement + 8;
		southIncrement = southIncrement - 8;
		eastIncrement = eastIncrement + 1;
		westIncrement = westIncrement - 1;
	}
}
