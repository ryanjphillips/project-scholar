#include "../boardUtils/determineWindowBackgroundColor.c"
void drawTiles(struct BoardTile *chessBoard) { 
	const int MIDDLEOFSCREENROWS = LINES / 2;
	const int MIDDLEOFSCREENCOLUMNS = COLS / 2;
	int boardRow;
	int boardColumn;
	int tileCounter;
	int positionCounter;
	int backgroundColorPair;

	tileCounter = 0;
	positionCounter = 64;	

	for (boardRow = 0; boardRow < BOARDROWS; boardRow++) {
		for (boardColumn = 0; boardColumn < BOARDCOLUMNS; boardColumn++) {

			backgroundColorPair = determineWindowBackgroundColor(boardRow, boardColumn);

			// Get the starting X and Y at the middle of the screen then adding length and width from there.
			
			int yPos = MIDDLEOFSCREENROWS - (BOARDWIDTH / 2) + (boardRow * BOARDTILEWIDTH);
		  int xPos = MIDDLEOFSCREENCOLUMNS - (BOARDLENGTH / 2)  + (boardColumn * BOARDTILELENGTH);	

			chessBoard[tileCounter] = createWindow(BOARDTILEWIDTH, BOARDTILELENGTH, yPos, xPos);
			wbkgd(chessBoard[tileCounter].tileWindow, COLOR_PAIR(backgroundColorPair));
			chessBoard[tileCounter].tileBackgroundColor = backgroundColorPair;
			chessBoard[tileCounter].tilePosition = positionCounter;
			tileCounter = tileCounter + 1;
			positionCounter = positionCounter - 1;
		}
	}
}
