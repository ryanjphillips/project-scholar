#include "../displayLegalMoves.c"
#include "../returnTileIfTileIsEmpty.c"

// Need to change this to a dynamic array somehow, not sure how atm.

void pawnMovement(struct Tile *pTile, struct Piece *pPawn) {

	int pawnPosition;
	pawnPosition  = pPawn->position ;

	if (pPawn->hasMoved == false) {

		displayLegalMoves(returnTileIfTileIsEmpty(pTile, pawnPosition - 8));
		displayLegalMoves(returnTileIfTileIsEmpty(pTile, pawnPosition - 16));
		//pPawn->hasMoved = true;
	} else {

		displayLegalMoves(returnTileIfTileIsEmpty(pTile, pawnPosition - 8));
	} 
}
