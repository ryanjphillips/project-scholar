#include "../pieces/displayLegalMoves.c"
#include "../pieces/movement/pawnMovement/pawnMovement.c"
#include "../pieces/movement/rookMovement/rookMovement.c"
#include "../pieces/movement/queenMovement/queenMovement.c"
#include "../pieces/movement/bishopMovement/bishopMovement.c"

void determinePieceSelection(struct Tile *pTile, struct Piece *pPiece) {

	char pieceName[20];
	strcpy(pieceName, pPiece->notation);

	switch(*pieceName) {
		case 'P':
			pawnMovement(pTile, pPiece);
			break;
		case 'R':
			rookMovement(pTile, pPiece);
			break;
		case 'Q':
			queenMovement(pTile, pPiece);
			break;
		case 'B':
			bishopMovement(pTile, pPiece);
			break;
	};
}
