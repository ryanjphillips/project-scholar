void addPieceToTileSingle(struct Tile *pTile, struct Tile *pPreviousTile) {
	int pieceBackGround;

		pieceBackGround = determinePieceColors(pTile->backgroundColor);
		pTile->isEmpty = false;	
		pTile->pPiece = pPreviousTile->pPiece;
		attron(COLOR_PAIR(pieceBackGround));
		mvwaddstr(pTile->pWindow, pTile->middleY, pTile->middleX, pPreviousTile->pPiece->character);
		wrefresh(pTile->pWindow);
		attroff(COLOR_PAIR(pieceBackGround));
}
