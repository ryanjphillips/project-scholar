#include "chessboard.h"
void chessboard(Chessboard *pChessBoard) {

	getmaxyx(pTiles[64].window, pChessBoard.innerBoardEndingY, pChessBoard.innerBoardEndingX);
	getbexy(pTiles[0].window, pChessBoard.innerBoardY, pChessBoard.innerBoardX);
	pChessBoard.innerBoardCenterY = pChessBoard.EndingY / 2;
	pChessBoard.innerBoardCenterX = pChessBoard.EndingX / 2;
	pChessBoard.boardColumns = 8;
	pChessBoard.boardRows = 8;
	pChessBoard.boardLength = pTiles.length * 8;
	pChessBoard.boardWidth = pTiles.width * 8;
} 
