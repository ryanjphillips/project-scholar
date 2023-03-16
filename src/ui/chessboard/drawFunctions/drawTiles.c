#include "../boardUtils/determineWindowBackgroundColor.c"
void drawTiles(struct BoardTile *chessBoard) { 
	const int MIDDLEOFSCREENROWS = LINES / 2;
	const int MIDDLEOFSCREENCOLUMNS = COLS / 2;
	int boardRow;
	int boardColumn;
	int tileCounter;
	char position[5];
	int backgroundColorPair;
	char letter[2];

	tileCounter = 0;

	for (boardRow = 0; boardRow < BOARDROWS; boardRow++) {

		if (boardRow == 0) {
			strcpy(letter, "a");
		}

		if (boardRow == 1) {
			strcpy(letter, "b");
		}
		if (boardRow == 2) {
			strcpy(letter, "c");
		}

		if (boardRow == 3) {
			strcpy(letter, "d");
		}

		if (boardRow == 4) {
			strcpy(letter, "e");
		}
		if (boardRow == 5) {
			strcpy(letter, "f");
		}
		if (boardRow == 6) {
			strcpy(letter, "g");
		}
		if (boardRow == 7) {
			strcpy(letter, "h");
		}

		for (boardColumn = 0; boardColumn < BOARDCOLUMNS; boardColumn++) {
 
			//char buffer[20];
			//strcpy(position, "");
			//strcpy(letter, "");
			//strcpy(buffer, "");

			backgroundColorPair = determineWindowBackgroundColor(boardRow, boardColumn);

			// Get the starting X and Y at the middle of the screen then adding length and width from there.
			
			int yPos = MIDDLEOFSCREENROWS - (BOARDWIDTH / 2) + (boardRow * BOARDTILEWIDTH);
		  int xPos = MIDDLEOFSCREENCOLUMNS - (BOARDLENGTH / 2)  + (boardColumn * BOARDTILELENGTH);	

			//sprintf(buffer, "%d", boardColumn);
			//strcat(position, buffer);


			chessBoard[tileCounter] = createWindow(BOARDTILEWIDTH, BOARDTILELENGTH, yPos, xPos);
			wbkgd(chessBoard[tileCounter].tileWindow, COLOR_PAIR(backgroundColorPair));
			chessBoard[tileCounter].tileBackgroundColor = backgroundColorPair;
			//strcpy(chessBoard[tileCounter].tileNotation, position);
			tileCounter = tileCounter + 1;
		}
	}
}
