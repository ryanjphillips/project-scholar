#include "../pieces/movement/pawnMovement.c"
#include "../pieces/movement/rookMovement.c"
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
	};
}
