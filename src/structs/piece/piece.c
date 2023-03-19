#include "piece.h"
void piece(struct Piece *pPiece, char name, char character, char position, int coloPair, int blackOrWhite) {

	strcpy(pPiece->name, name); 
	strcpy(pPiece->character, character);
	strcpy(pPiece->position, position); 
	*pPiece->coloPair = blackOrWhite;
}
