void updatePawnPromotion(struct Tile *pTile, struct Tile *pPromotion, int pawnPosition, int selectedPromotion) {

	//printw("%s", pPromotion[selectedPromotion].pPiece->name);
	pTile[pawnPosition].pPiece->name = pPromotion[selectedPromotion].pPiece->name;
	pTile[pawnPosition].pPiece->character = pPromotion[selectedPromotion].pPiece->character;
	pTile[pawnPosition].pPiece->piecePoints = pPromotion[selectedPromotion].pPiece->piecePoints;
	//mvwaddstr(pTile[pawnPosition].pWindow, pTile[pawnPosition].middleY, pTile[pawnPosition].middleX, WHITEQUEEN);
	wrefresh(pTile[pawnPosition].pWindow);
}
