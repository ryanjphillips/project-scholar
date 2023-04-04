#include "./queenLegalTiles.c"
void queenMovement(struct Tile *pTile, struct Piece *pQueen) {

	int northColumn = 1;
	int southColumn = 1;
	int eastColumn = 1; 
	int westColumn = 1; 
	int columnPosition;
	int eastCounter = 0;
	int westCounter = 0;
	int counter;
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
}
