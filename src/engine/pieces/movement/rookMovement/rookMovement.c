void rookMovement(struct Tile *pTile, struct Piece *pRook) {

	int northColumn = 1;
	int southColumn = 1;
	int eastColumn = 1; 
	int westColumn = 1; 
	int columnPosition;
	int eastCounter = 0;
	int westCounter = 0;
	int counter;
	int rookPosition;
	int northNewPosition;
	int southNewPosition;
	int eastNewPosition;
	int westNewPosition;

	rookPosition = pRook->position;
	counter = 0;
	columnPosition = rookPosition % 8;

	while (northColumn != 0 || 
					southColumn != 0 || 
					eastColumn != 0 || 
					westColumn != 0) {

		counter = counter + 1;
		northNewPosition = rookPosition - (8 * counter);
		southNewPosition = rookPosition + (8 * counter);

		// North 
		if (northColumn != 0) {
			northColumn = checkForLegalMoves(pTile, northNewPosition);
		}

		// South 
		if (southColumn != 0) {
			southColumn = checkForLegalMoves(pTile, southNewPosition);
		}

		// West 
		if (westColumn != 0) {
			westCounter = westCounter - 1;
			westNewPosition =  rookPosition + (1 * westCounter);

			if (westCounter + columnPosition < 0) {
				westColumn = 0;

			} else { 
			  westColumn = checkForLegalMoves(pTile, westNewPosition);
		  }
		}

		// East 
		if (eastColumn != 0) {
			eastCounter = eastCounter + 1;
			eastNewPosition =  rookPosition + (1 * eastCounter);

			if (checkIfNewPositionIsOffBoard(rookPosition, eastNewPosition)) {
				eastColumn = 0;

			} else {
			  eastColumn = checkForLegalMoves(pTile, eastNewPosition);
			}	
		}
	}
}
