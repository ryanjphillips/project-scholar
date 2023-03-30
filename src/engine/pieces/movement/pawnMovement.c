#include "../displayLegalMoves.c"
#include "../drawLegalTileIfEmpty.c"
#include "../drawLegalTileIfEnemy.c"

void pawnMovement(struct Tile *pTile, struct Piece *pPawn) {

	int pawnPosition;
	pawnPosition  = pPawn->position ;

	if (pPawn->hasMoved == false) {

		drawLegalTileIfEmpty(pTile, pawnPosition - 8);
		drawLegalTileIfEmpty(pTile, pawnPosition - 16);
	} 

	if (pawnPosition > 7) {

		drawLegalTileIfEmpty(pTile, pawnPosition - 8);
		drawLegalTileIfEnemy(pTile, pawnPosition - 8 + 1);
		drawLegalTileIfEnemy(pTile, pawnPosition - 8 - 1);
	
	// The pawn is on the end of the board, we need to promote the pawn. 
	
	} else {

	}
}
