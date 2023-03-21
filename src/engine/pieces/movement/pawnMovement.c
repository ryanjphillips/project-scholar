#include "../displayLegalMoves.c"
void *pawnMovement(struct Tile *pTile, struct Piece *pPawn) {
	struct Tile *pTileArray;
	int pawnPostion;

	// Pawns move two squares first move.
	
	pawnPositon  = pPawn->position ;

	if (pPawn->hasMoved = false) {
		pTileArray[0] = pTile[37];
		pTileArray[1] = pTile[45];
		pPawn->hasMoved = true;
	} else {

		pTileArray[0] = pTile[37];
	}

	displayLegalMoves(pTileArray, 2 );
}
