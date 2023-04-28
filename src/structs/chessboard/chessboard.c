#include "chessboard.h"
void chessboard(struct Chessboard *pChessBoard, struct Tile *pTiles) {
   // Rows, Columns, and Dimensions
   pChessBoard->boardColumns = 8;
   pChessBoard->boardRows    = 8;
   pChessBoard->boardLength  = pTiles->length * 8;
   pChessBoard->boardWidth   = pTiles->width * 8;

   // Chessboard Corner Coords
   pChessBoard->boardEnding.yCoord     = pTiles[63].endingY;
   pChessBoard->boardEnding.xCoord     = pTiles[63].endingX;
   pChessBoard->boardCenter.yCoord     = pChessBoard->boardEnding.yCoord / 2;
   pChessBoard->boardCenter.xCoord     = pChessBoard->boardEnding.xCoord / 2;
   pChessBoard->boardBeginning.yCoord  = pTiles[0].beginningY;
   pChessBoard->boardBeginning.xCoord  = pTiles[0].beginningX;
   pChessBoard->boardTopRight.yCoord   = pTiles[7].beginningY;
   pChessBoard->boardTopRight.xCoord   = pTiles[7].beginningX + pTiles[0].length;
   pChessBoard->boardBottomLeft.yCoord = pTiles[56].beginningY + pTiles[0].width;
   pChessBoard->boardBottomLeft.xCoord = pTiles[56].beginningX;

   // Draw Chessboard Letters and Numbers
   drawBoardLetters(pChessBoard->boardBottomLeft, pTiles->length, pChessBoard->boardColumns);
   drawBoardNumbers(pChessBoard->boardBeginning, pTiles->width, pChessBoard->boardRows);
}
