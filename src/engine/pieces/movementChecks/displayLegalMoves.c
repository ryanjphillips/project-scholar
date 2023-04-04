void displayLegalMoves(struct Tile *pTile) {

	box(pTile->pWindow, 0, 0);
	wborder(pTile->pWindow, ' ', ' ', ' ', ' ', ACS_ULCORNER, ACS_URCORNER, ACS_LLCORNER, ACS_LRCORNER);
	wrefresh(pTile->pWindow);
	pTile->isSelected = true;
}
