#include "drawChessboard.h"
#include "./boardUtils/createTile.c"
#include "./drawFunctions/drawTiles.c"
#include "./drawFunctions/drawPieces.c"

int drawChessboard(struct BoardTile *chessBoard) {

	drawTiles(chessBoard);
	
	for (int i = 0; i <= 63; i++) {

		attron(COLOR_PAIR(TEXT_COLOR));
		wrefresh(chessBoard[i].tileWindow);
    attroff(COLOR_PAIR(TEXT_COLOR));
	}

	return 0;
}
