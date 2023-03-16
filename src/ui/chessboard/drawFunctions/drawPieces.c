void drawPieces(struct BoardTile *chessBoardTile, const char* piece, char *pieceName) {

	int pieceBackgroundColor;

	if (chessBoardTile->tileBackgroundColor == WHITE_SQUARE) {

		pieceBackgroundColor = BLACK_SQUARE;
	} else {

		pieceBackgroundColor = WHITE_SQUARE;
	}
	
	chessBoardTile->tileBackgroundColor = pieceBackgroundColor;
	chessBoardTile->tileIsEmpty = false;
	strncpy(chessBoardTile->tilePieceName, pieceName, 32);
	attron(COLOR_PAIR(pieceBackgroundColor));
	mvwaddstr(chessBoardTile->tileWindow, chessBoardTile->tileMiddleY, chessBoardTile->tileMiddleX, piece);
	attroff(COLOR_PAIR(pieceBackgroundColor));
	wrefresh(chessBoardTile->tileWindow);
}
