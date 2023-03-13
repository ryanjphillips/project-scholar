#include "../chessboard.h"
void drawPieces(WINDOW *chessboardTile, char piece, int backGroundColor) {

	int pieceBackgroundColor;
	const int windowRowMiddle = chessboardTile / LINES;
	const int windowColumsMiddle = chessboardTile / COLS;

	if (backGroundColor == WHITE_SQUARE) {

		pieceBackgroundColor = BLACK_SQUARE;
	} else {

		pieceBackgroundColor = WHITE_SQUARE;
	}
	
	mvwaddstr(chessboardTile, windowRowMiddle, windowColumsMiddle);
	wrefresh(chessboardTile);
}
