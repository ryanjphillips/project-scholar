#include "tile.h"
void tile(Tile *pTile[tileCounter][64], const Dimensions *pDimensions) {
	int row;
	int column;
	int tileCounter = 0;
	int tileYPos;
	int tileXPos;
	int posCounter = 8;

	for (row = 0; row < pDimensions.boardRows; row++) {
		for (column = 0; column < pDimensions.boardColumns; column++) {

			tileYPos = pDimensions.startingY + (row * pDimensions.tileWidth); 
			tileXPos = pDimensions.startingX + (column * pDimensions.tileLength); 
			pTile[tileCounter].pWindow = createTileWindow(pDimensions.tileLength, pDimensions.tileWidth, tileYPos, tileXPos);
			pTile[tileCounter].backgroundColor = setTileColor(row, column); 
			pTile[tileCounter].beginningY = tileYPos;
			pTile[tileCounter].beginningX = tileXPos;
			pTile[tileCounter].endingY = tileYPos + pDimensions.tileWidth;
			pTile[tileCounter].endingX = tileXPos + pDimensions.tileColumns;
			pTile[tileCounter].middleY = tileYPos + pDimensions.tileWidth / 2;
			pTile[tileCounter].middleX = tileYPos + pDimensions.tileLength / 2;
			_Bool isEmpty;
			strcpy(pTile[tileCounter].pieceName, "None");
			strcpy(pTile[tileCounter].notation, getNotation(column, row, posCounter));

			tileCounter += 1;
		}

		posCounter -= 1;
	}
}
