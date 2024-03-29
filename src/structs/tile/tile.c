#include "tile.h"
void tile(struct Tile *pTile, struct Dimensions *pDimensions) {
   int  row;
   int  column;
   int  tileCounter = 0;
   int  tileYPos;
   int  tileXPos;
   int  positionCounter = 8;
   char notationChar[20];
   char windowBorders[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };

   for (row = 0; row < pDimensions->rows; row++) {
      for (column = 0; column < pDimensions->columns; column++) {
         // Calculating the starting X and Y Pos for each tile. This is based off the middle of the current window.

         tileYPos = pDimensions->boardStartingPosition.yCoord + (pDimensions->tileWidth * row);
         tileXPos = pDimensions->boardStartingPosition.xCoord + (pDimensions->tileLength * column);

         // Create Window takes in HEIGHT and Length, which height will equal width, in my case.
         pTile[tileCounter].pWindow         = createTileWindow(pDimensions->tileWidth, pDimensions->tileLength, tileYPos, tileXPos, windowBorders);
         pTile[tileCounter].backgroundColor = setTileColor(row, column);
         pTile[tileCounter].beginningY      = tileYPos;
         pTile[tileCounter].beginningX      = tileXPos;
         pTile[tileCounter].endingY         = tileYPos + pDimensions->tileWidth;
         pTile[tileCounter].endingX         = tileXPos + pDimensions->tileLength;
         pTile[tileCounter].middleY         = pDimensions->tileWidth / 2;
         pTile[tileCounter].middleX         = pDimensions->tileLength / 2;
         pTile[tileCounter].isEmpty         = 1;
         pTile[tileCounter].isSelected      = false;
         pTile[tileCounter].length          = pDimensions->tileLength;
         pTile[tileCounter].width           = pDimensions->tileWidth;
         getNotation(column, positionCounter, notationChar);
         strcpy(pTile[tileCounter].notation, notationChar);

         tileCounter += 1;
      }

      positionCounter -= 1;
   }
}
