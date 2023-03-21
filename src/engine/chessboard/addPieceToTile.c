#include "./determinePieceColors.c" 
void addPieceToTile(struct Tile *pTile, struct Piece *pPiece, int sizeOfArray) {
	int counter;
	int pieceBackGround;
	int position;

	for (counter = 0; counter < sizeOfArray; counter++) {

		pieceBackGround = determinePieceColors(pTile[counter].backgroundColor);
		position = pPiece[counter].position;
		pTile[position].isEmpty = false;	
		pTile[position].pPiece = &pPiece[counter];
		attron(COLOR_PAIR(pieceBackGround));
		mvwaddstr(pTile[position].pWindow, pTile[position].middleY, pTile[position].middleX, pPiece[counter].character);
		wrefresh(pTile[position].pWindow);
		attroff(COLOR_PAIR(pieceBackGround));
	}
}
