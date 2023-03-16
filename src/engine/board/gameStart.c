#include "./gameStart.h"
void iniStartingBoard(struct BoardTile *chessBoard) {
	int counter; 

	// Black Pieces
	drawPieces(chessBoard[0], BLACKROOK); 
	drawPieces(chessBoard[1], BLACKKNIGHT); 
	drawPieces(chessBoard[2], BLACKBISHOP); 
	drawPieces(chessBoard[3], BLACKQUEEN); 
	drawPieces(chessBoard[4], BLACKKING); 
	drawPieces(chessBoard[5], BLACKBISHOP); 
	drawPieces(chessBoard[6], BLACKKNIGHT); 
	drawPieces(chessBoard[7], BLACKROOK); 
	drawPieces(chessBoard[8], BLACKPAWN); 
	drawPieces(chessBoard[9], BLACKPAWN); 
	drawPieces(chessBoard[10], BLACKPAWN); 
	drawPieces(chessBoard[11], BLACKPAWN); 
	drawPieces(chessBoard[12], BLACKPAWN); 
	drawPieces(chessBoard[13], BLACKPAWN); 
	drawPieces(chessBoard[14], BLACKPAWN); 
	drawPieces(chessBoard[15], BLACKPAWN); 

	//White Pieces
	drawPieces(chessBoard[48], WHITEPAWN); 
	drawPieces(chessBoard[49], WHITEPAWN); 
	drawPieces(chessBoard[50], WHITEPAWN); 
	drawPieces(chessBoard[51], WHITEPAWN); 
	drawPieces(chessBoard[52], WHITEPAWN); 
	drawPieces(chessBoard[53], WHITEPAWN); 
	drawPieces(chessBoard[54], WHITEPAWN); 
	drawPieces(chessBoard[55], WHITEPAWN); 
	drawPieces(chessBoard[56], WHITEROOK); 
	drawPieces(chessBoard[57], WHITEKNIGHT); 
	drawPieces(chessBoard[58], WHITEBISHOP); 
	drawPieces(chessBoard[59], WHITEQUEEN); 
	drawPieces(chessBoard[60], WHITEKING); 
	drawPieces(chessBoard[61], WHITEBISHOP); 
	drawPieces(chessBoard[62], WHITEKNIGHT); 
	drawPieces(chessBoard[63], WHITEROOK); 
}
