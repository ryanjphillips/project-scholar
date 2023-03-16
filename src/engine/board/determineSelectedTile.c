int determineSelectedTile(struct BoardTile *chessBoard, int mouseYCoord, int mouseXCoord) {

	const int BOARDSIZE = 64;
	int tileCounter;

	for (tileCounter = 0; tileCounter < BOARDSIZE; tileCounter++) {

		if ((mouseYCoord >= chessBoard[tileCounter].tileBeginningY && mouseYCoord < chessBoard[tileCounter].tileEndingY) && mouseXCoord >= chessBoard[tileCounter].tileBeginningX && mouseXCoord < chessBoard[tileCounter].tileEndingX) {

			return tileCounter;
		} 
 }
	return -1;
}
