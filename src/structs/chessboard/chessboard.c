#include "chessboard.h"
void chessboard(struct Chessboard *pChessBoard, struct Tile *pTiles) {

	pChessBoard->innerBoardCenterY = pChessBoard->innerBoardEndingY / 2;
	pChessBoard->innerBoardCenterX = pChessBoard->innerBoardEndingX / 2;
	pChessBoard->boardColumns = 8;
	pChessBoard->boardRows = 8;
	pChessBoard->boardLength = pTiles->length * 8;
	pChessBoard->boardWidth = pTiles->width * 8;
} 
