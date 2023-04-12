#include "chessboard.h"
void chessboard(struct Chessboard *pChessBoard, struct Tile *pTiles) {
   pChessBoard->innerBoardCenterY = pChessBoard->innerBoardEndingY / 2;
   pChessBoard->innerBoardCenterX = pChessBoard->innerBoardEndingX / 2;
   pChessBoard->boardColumns      = 8;
   pChessBoard->boardRows         = 8;
   pChessBoard->boardLength       = pTiles->length * 8;
   pChessBoard->boardWidth        = pTiles->width * 8;

   // Chessboard Corner Dimensions
   pChessBoard->innerBoardBeginning.yCoord = pTiles[0].beginningY;
   pChessBoard->innerBoardBeginning.xCoord = pTiles[0].beginningX;

   pChessBoard->innerBoardTopRight.yCoord = pTiles[7].beginningY;
   pChessBoard->innerBoardTopRight.xCoord = pTiles[7].beginningX + pTiles[0].length;
}
