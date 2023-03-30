#include "../displayLegalMoves.c"
#include "../returnTileIfTileIsEmpty.c"

void pawnMovement(struct Tile *pTile, struct Piece *pPawn) {

	int pawnPosition;
	pawnPosition  = pPawn->position ;

	if (pPawn->hasMoved == false) {

		displayLegalMoves(returnTileIfTileIsEmpty(pTile, pawnPosition - 8));
		displayLegalMoves(returnTileIfTileIsEmpty(pTile, pawnPosition - 16));
	} else {

		displayLegalMoves(returnTileIfTileIsEmpty(pTile, pawnPosition - 8));
	} 
}
