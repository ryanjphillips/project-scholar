void addPieceToTileSingle(struct Tile *pTile, int selectedIndex, int previousIndex) {
	int pieceBackGround;

		pieceBackGround = determinePieceColors(pTile[selectedIndex].backgroundColor);

		pTile[selectedIndex].isEmpty = 10;
		pTile[selectedIndex].pPiece = pTile[previousIndex].pPiece;
		attron(COLOR_PAIR(pieceBackGround));
		mvwaddstr(pTile[selectedIndex].pWindow, pTile[selectedIndex].middleY, pTile[selectedIndex].middleX, pTile[previousIndex].pPiece->character);
		wrefresh(pTile[selectedIndex].pWindow);
		attroff(COLOR_PAIR(pieceBackGround));
}
