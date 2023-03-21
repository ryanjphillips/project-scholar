void addPieceToTileSingle(struct Tile pTile, struct Piece *pPiece) {
	int pieceBackGround;
	int position;

		pieceBackGround = determinePieceColors(pTile.backgroundColor);
		position = pPiece->position;
		pTile.isEmpty = false;	
		pTile.pPiece = pPiece;
		attron(COLOR_PAIR(pieceBackGround));
		mvwaddstr(pTile.pWindow, pTile.middleY, pTile.middleX, pPiece->character);
		wrefresh(pTile.pWindow);
		attroff(COLOR_PAIR(pieceBackGround));
}
