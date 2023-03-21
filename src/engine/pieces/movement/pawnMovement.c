#include "../displayLegalMoves.c"
#include "../returnTileIfTileIsEmpty.c"

void *pawnMovement(struct Tile *pTile, struct Piece *pPawn) {
	struct Tile *pTileArray;
	int pawnPosition;

	// Pawns move two squares first move.
	
	pawnPosition  = pPawn->position ;

	if (pPawn->hasMoved = false) {
		*pTileArray[0] = returnTileIfTileIsEmpty(pTile, pawnPosition - 8);
	  *pTileArray[1] = returnTileIfTileIsEmpty(pTile, pawnPosition - 16);
		pPawn->hasMoved = true;
	} else {

	}

	displayLegalMoves(pTileArray, 2 );
}
