#include "../pieces/pawnMovement.c"
void determinePieceSelection(struct Piece *pPiece) {

	char pieceName[20];
	strcpy(pieceName, pPiece->notation);
	switch(*pieceName) {
    case 'P':
			pawnMovement();
			break;
	};
}
