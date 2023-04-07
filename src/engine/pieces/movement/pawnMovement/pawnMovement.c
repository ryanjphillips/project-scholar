#include "./pawnEnemyCheck.c"
#include "./pawnEmptyCheck.c"

void pawnMovement(struct Tile *pTile, struct Piece *pPawn, struct Chessboard *pChessBoard, struct Tile *pPromotionTiles) {

	int pawnPosition;
	pawnPosition  = pPawn->position;

	// Describes the pawn attacks
	int forwardPawnAttack = pawnPosition - 8;
	int doubleForwardPawnAttack = forwardPawnAttack - 8;
	int leftPawnAttack = pawnPosition - 8 + 1;
	int rightPawnAttack = pawnPosition - 8 - 1;

	// Check if its the first move.
	if (pPawn->hasMoved == false) {
		pawnEmptyCheck(pTile, forwardPawnAttack);
		pawnEmptyCheck(pTile, doubleForwardPawnAttack);

	// Make sure the pawns do not go off the board.
	} else if (pawnPosition > 7) {
		pawnEmptyCheck(pTile, forwardPawnAttack);
		pawnEnemyCheck(pTile, pawnPosition, leftPawnAttack);
		pawnEnemyCheck(pTile, pawnPosition, rightPawnAttack);

	} else {

		refreshPromotionWindows(pPromotionTiles, 4);
	} 
}
