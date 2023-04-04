#include "./pawnEnemyCheck.c"
#include "./pawnEmptyCheck.c"
void pawnMovement(struct Tile *pTile, struct Piece *pPawn) {

	int pawnPosition;
	pawnPosition  = pPawn->position ;

	if (pPawn->hasMoved == false) {

		pawnEmptyCheck(pTile, pawnPosition - 8);
		pawnEmptyCheck(pTile, pawnPosition - 16);
	} else if (pawnPosition > 7) {

		pawnEmptyCheck(pTile, pawnPosition - 8);
		pawnEnemyCheck(pTile, pawnPosition - 8 + 1);
		pawnEnemyCheck(pTile, pawnPosition - 8 - 1);
	} 
}
