#include "../pieces/movement/pawnMovement.c"
void determinePieceSelection(struct Tile *pTile, struct Piece *pPiece) {

	char pieceName[20];
	strcpy(pieceName, pPiece->notation);
	switch(*pieceName) {
    case 'P':
			pawnMovement(pTile, pPiece);
			break;
	};
}
