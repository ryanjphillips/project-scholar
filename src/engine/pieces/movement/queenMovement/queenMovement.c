#include "./queenLegalTiles.c"
void queenMovement(struct Tile *pTile, struct Piece *pQueen) {

	int northEastDiagonal = 1;
	int southEastDiagonal = 1;
	int southWestDiagonal = 1; 
	int northWestDiagonal = 1; 
	int columnPosition;
	int northEastCounter = 0;
	int southEastCounter = 0;
	int northWestCounter = 0;
	int southWestCounter = 0;
	int counter;
	int northColumn = 1;
	int southColumn = 1;
	int eastColumn = 1; 
	int westColumn = 1; 
	int eastCounter = 0;
	int westCounter = 0;
	int queenPosition;

	queenPosition = pQueen->position;
	counter = 0;

	while (northColumn != 0 || southColumn != 0) {

		counter = counter + 1;
		// North 
		if (northColumn != 0) {
			northColumn = queenLegalTiles(pTile, queenPosition - (8 * counter));
		}

		// South 
		if (southColumn != 0) {
			southColumn = queenLegalTiles(pTile, queenPosition + (8 * counter));
		}
	}

	while (westColumn !=0 || eastColumn != 0) {

		columnPosition = queenPosition % 8;

		// West 
		if (westColumn != 0) {
			westCounter = westCounter - 1;
			if (westCounter + columnPosition < 0) {

				westColumn = 0;
			} else { 

			  westColumn = queenLegalTiles(pTile, queenPosition + (1 * westCounter));
		  }
		}

		// East 
		if (eastColumn != 0) {
			eastCounter = eastCounter + 1;
			if (eastCounter + columnPosition >= 8) {

				eastColumn = 0;
			} else {
			  eastColumn = queenLegalTiles(pTile, queenPosition + (1 * eastCounter));
			}	
		}
	}

	while (northEastDiagonal != 0 || northWestDiagonal != 0 || southEastDiagonal != 0 || southWestDiagonal != 0) {


		// North East
		if (northEastDiagonal != 0) {
			northEastCounter = northEastCounter + 1;
			if (northEastCounter + columnPosition >= 8) {

				northEastDiagonal = 0;
			} else {
			  northEastDiagonal = queenLegalTiles(pTile, queenPosition + ((8 * -1 * northEastCounter) + (northEastCounter)));
			}	
		}

		// North West 
		if (northWestDiagonal != 0) {
			northWestCounter = northWestCounter - 1;
			if (northWestCounter + columnPosition < 0) {

				northWestDiagonal = 0;
			} else {
			  northWestDiagonal = queenLegalTiles(pTile, queenPosition + ((8 * -1 * northWestCounter) + (northWestCounter)));
			}	
		}

		// South East 
		if (southEastDiagonal != 0) {
			southEastCounter = southEastCounter + 1;
			if (southEastCounter + columnPosition >= 8) {

				southEastDiagonal = 0;
			} else {
			  southEastDiagonal = queenLegalTiles(pTile, queenPosition + ((8 * southEastCounter) + (southEastCounter)));
			}	
		}

		// South West 
		if (southWestDiagonal != 0) {
			southWestCounter = southWestCounter - 1;
			if (southWestCounter + columnPosition < 0) {

				southWestDiagonal = 0;
			} else {
			  southWestDiagonal = queenLegalTiles(pTile, queenPosition + ((8 * southWestCounter) + (southWestCounter)));
			}	
		}
	}
}
