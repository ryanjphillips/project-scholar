#include "../boardUtils/determineWindowBackgroundColor.c"
#include "../boardUtils/mapLetterToNumb.c"
void drawTiles(struct BoardTile *chessBoard) { 
	const int MIDDLEOFSCREENROWS = LINES / 2;
	const int MIDDLEOFSCREENCOLUMNS = COLS / 2;
	int boardRow;
	int boardColumn;
	int tileCounter;
	int backgroundColorPair;
	char position[20];
	char numbToString[20];
	int posCounter;

	tileCounter = 0;
	posCounter = 8;

	for (boardRow = 0; boardRow < BOARDROWS; boardRow++) {
		for (boardColumn = 0; boardColumn < BOARDCOLUMNS; boardColumn++) {

			memset(position, 0, sizeof(position));
			memset(numbToString, 0, sizeof(numbToString));
			backgroundColorPair = determineWindowBackgroundColor(boardRow, boardColumn);
			// Get the starting X and Y at the middle of the screen then adding length and width from there.
			mapLetterToNumb(boardColumn, position);
			sprintf(numbToString, "%d", posCounter);
			strcat(position, numbToString);
			
			int yPos = MIDDLEOFSCREENROWS - (BOARDWIDTH / 2) + (boardRow * BOARDTILEWIDTH);
		  int xPos = MIDDLEOFSCREENCOLUMNS - (BOARDLENGTH / 2)  + (boardColumn * BOARDTILELENGTH);	

			chessBoard[tileCounter] = createWindow(BOARDTILEWIDTH, BOARDTILELENGTH, yPos, xPos);
			wbkgd(chessBoard[tileCounter].tileWindow, COLOR_PAIR(backgroundColorPair));
			chessBoard[tileCounter].tileBackgroundColor = backgroundColorPair;
			strcpy(chessBoard[tileCounter].tileNotation, position);
			tileCounter = tileCounter + 1;
			
		}
			posCounter = posCounter - 1;
	}
}
