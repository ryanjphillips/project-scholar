#include "../boardUtils/determineWindowBackgroundColor.c"
void drawTiles(WINDOW **chessBoard) { const int MIDDLEOFSCREENROWS = LINES / 2;
	const int MIDDLEOFSCREENCOLUMNS = COLS / 2;
	int boardRow;
	int boardColumn;
	int tileCounter;
	int backgroundColorPair;

	tileCounter = 0;

	for (boardColumn = 0; boardColumn < BOARDCOLUMNS; boardColumn++) {
		for (boardRow = 0; boardRow < BOARDROWS; boardRow++) {

			backgroundColorPair = determineWindowBackgroundColor(boardColumn, boardRow);

			int yPos = MIDDLEOFSCREENROWS - (BOARDWIDTH / 2) + (boardRow * BOARDTILEWIDTH);
		  int xPos = MIDDLEOFSCREENCOLUMNS - (BOARDLENGTH) / 2  + (boardColumn * BOARDTILELENGTH);	

			chessBoard[tileCounter] = createWindow(BOARDTILEWIDTH, BOARDTILELENGTH, yPos, xPos);
			wbkgd(chessBoard[tileCounter], COLOR_PAIR(backgroundColorPair));
			tileCounter = tileCounter + 1;
		}
	}
}
