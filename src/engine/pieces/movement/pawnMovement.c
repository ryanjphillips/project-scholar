#include "../displayLegalMoves.c"
#include "../determineLegalTile.c"

void pawnMovement(struct Tile *pTile, struct Piece *pPawn) {

	int pawnPosition;
	pawnPosition  = pPawn->position ;

	if (pPawn->hasMoved == false) {

		determineLegalTile(pTile, pawnPosition - 8);
		determineLegalTile(pTile, pawnPosition - 16);
	} else if (pawnPosition > 7) {

	if (pTile[pawnPosition - 8].isEmpty == 1) {
		determineLegalTile(pTile, pawnPosition - 8);
	}
		determineLegalTile(pTile, pawnPosition - 8);

	if (pTile[pawnPosition - 8 + 1].isEmpty == 0) {
		determineLegalTile(pTile, pawnPosition - 8 + 1);
	}

	if (pTile[pawnPosition - 8 - 1].isEmpty == 0) {
		determineLegalTile(pTile, pawnPosition - 8 - 1);
	}
	// The pawn is on the end of the board, we need to promote the pawn. 
	
	} else {

	}
}
