#include "./gameStart.h"
void iniStartingBoard(struct BoardTile *chessBoard) {
	int counter; 

	// Black Pieces
	drawPieces(&chessBoard[0], BLACKROOK, "Black Rook"); 
	drawPieces(&chessBoard[1], BLACKKNIGHT, "Black Knight"); 
	drawPieces(&chessBoard[2], BLACKBISHOP, "Black Bishop"); 
	drawPieces(&chessBoard[3], BLACKQUEEN, "Black Queen"); 
	drawPieces(&chessBoard[4], BLACKKING, "Black King"); 
	drawPieces(&chessBoard[5], BLACKBISHOP, "Black Bishop"); 
	drawPieces(&chessBoard[6], BLACKKNIGHT, "Black Knight"); 
	drawPieces(&chessBoard[7], BLACKROOK, "Black Rook"); 
	drawPieces(&chessBoard[8], BLACKPAWN, "Black Pawn"); 
	drawPieces(&chessBoard[9], BLACKPAWN, "Black Pawn"); 
	drawPieces(&chessBoard[10], BLACKPAWN, "Black Pawn"); 
	drawPieces(&chessBoard[11], BLACKPAWN, "Black Pawn"); 
	drawPieces(&chessBoard[12], BLACKPAWN, "Black Pawn"); 
	drawPieces(&chessBoard[13], BLACKPAWN, "Black Pawn"); 
	drawPieces(&chessBoard[14], BLACKPAWN, "Black Pawn"); 
	drawPieces(&chessBoard[15], BLACKPAWN, "Black Pawn"); 

	//White Pieces
	drawPieces(&chessBoard[48], WHITEPAWN, "White Pawn"); 
	drawPieces(&chessBoard[49], WHITEPAWN, "White Pawn"); 
	drawPieces(&chessBoard[50], WHITEPAWN, "White Pawn"); 
	drawPieces(&chessBoard[51], WHITEPAWN, "White Pawn"); 
	drawPieces(&chessBoard[52], WHITEPAWN, "White Pawn"); 
	drawPieces(&chessBoard[53], WHITEPAWN, "White Pawn"); 
	drawPieces(&chessBoard[54], WHITEPAWN, "White Pawn"); 
	drawPieces(&chessBoard[55], WHITEPAWN, "White Pawn"); 
	drawPieces(&chessBoard[56], WHITEROOK, "White Rook"); 
	drawPieces(&chessBoard[57], WHITEKNIGHT, "White Knight"); 
	drawPieces(&chessBoard[58], WHITEBISHOP, "White Bishop"); 
	drawPieces(&chessBoard[59], WHITEQUEEN, "White Queen"); 
	drawPieces(&chessBoard[60], WHITEKING, "White King"); 
	drawPieces(&chessBoard[61], WHITEBISHOP, "White Bishop"); 
	drawPieces(&chessBoard[62], WHITEKNIGHT, "White Knight"); 
	drawPieces(&chessBoard[63], WHITEROOK, "White Rook"); 
}
