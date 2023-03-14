#include "chessboard.h"
#include "./boardUtils/createWindow.c"
#include "./drawFunctions/drawTiles.c"

int drawChessboard(WINDOW **chessBoard) {

	drawTiles(chessBoard);
	
	for (int i = 0; i <= 63; i++) {

		attron(COLOR_PAIR(TEXT_COLOR));
		wrefresh(chessBoard[i]);
    attroff(COLOR_PAIR(TEXT_COLOR));
	}

	return 0;
}
