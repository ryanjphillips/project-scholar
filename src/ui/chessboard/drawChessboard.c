#include "./boardUtils/createWindow.c"
#include "./drawFunctions/drawTiles.c"
#include "./drawFunctions/drawPhysicalLetterCoords.c"
#include "./drawFunctions/drawPhysicalNumberCoords.c"

void drawChessboard() {
	

	// drawPhysicalBoard();
	WINDOW * chessBoard[64] = {0};
	drawTiles(chessBoard);
	
	for (int i = 0; i <= 63; i++) {

		attron(COLOR_PAIR(TEXT_COLOR));
		// mvwaddstr(chessBoard[i], 2,2, BLACKPAWN);
		wrefresh(chessBoard[i]);
    attroff(COLOR_PAIR(TEXT_COLOR));
	}
}
