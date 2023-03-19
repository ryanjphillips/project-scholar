#include "chessboard.h"
void chessboard(struct Chessboard *pChessBoard, struct Tile *pTiles) {

	// getmaxyx(pTiles[64].pWindow, pChessBoard->innerBoardEndingY, pChessBoard->innerBoardEndingX);
	// getbegyx(pTiles[0].pWindow, pChessBoard->innerBoardBeginningY, pChessBoard->innerBoardBeginningX);
	pChessBoard->innerBoardCenterY = pChessBoard->innerBoardEndingY / 2;
	pChessBoard->innerBoardCenterX = pChessBoard->innerBoardEndingX / 2;
	pChessBoard->boardColumns = 8;
	pChessBoard->boardRows = 8;
	pChessBoard->boardLength = pTiles->length * 8;
	pChessBoard->boardWidth = pTiles->width * 8;
  // pChessBoard->physicalCordNumbers[9] = {{'1', '2', '3', '4', '5', '6', '7', '8'}};
  // pChessBoard->physicalCordLetters[9] = {{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}}; 
} 
