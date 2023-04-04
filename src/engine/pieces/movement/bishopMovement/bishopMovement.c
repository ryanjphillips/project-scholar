#include "./bishopLegalTiles.c"
void bishopMovement(struct Tile *pTile, struct Piece *pBishop) {

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
	int bishopPosition;

  bishopPosition = pBishop->position;
	columnPosition = bishopPosition % 8;

	while (northEastDiagonal != 0 || northWestDiagonal != 0 || southEastDiagonal != 0 || southWestDiagonal != 0) {

		printw("TEST");

		// North East
		if (northEastDiagonal != 0) {
			northEastCounter = northEastCounter + 1;
			if (northEastCounter + columnPosition >= 8) {

				northEastDiagonal = 0;
			} else {
			  northEastDiagonal = bishopLegalTiles(pTile, bishopPosition + ((8 * -1 * northEastCounter) + (northEastCounter)));
			}	
		}

		// North West 
		if (northWestDiagonal != 0) {
			northWestCounter = northWestCounter - 1;
			if (northWestCounter + columnPosition < 0) {

				northWestDiagonal = 0;
			} else {
			  northWestDiagonal = bishopLegalTiles(pTile, bishopPosition + ((8 * -1 * northWestCounter) + (northWestCounter)));
			}	
		}

		// South East 
		if (southEastDiagonal != 0) {
			southEastCounter = southEastCounter + 1;
			if (southEastCounter + columnPosition >= 8) {

				southEastDiagonal = 0;
			} else {
			  southEastDiagonal = bishopLegalTiles(pTile, bishopPosition + ((8 * southEastCounter) + (southEastCounter)));
			}	
		}

		// South West 
		if (southWestDiagonal != 0) {
			southWestCounter = southWestCounter - 1;
			if (southWestCounter + columnPosition < 0) {

				southWestDiagonal = 0;
			} else {
			  southWestDiagonal = bishopLegalTiles(pTile, bishopPosition + ((8 * southWestCounter) + (southWestCounter)));
			}	
		}
	}
}
