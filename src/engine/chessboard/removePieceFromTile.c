void removePieceFromTile(struct Tile *pTile) {
		werase(pTile->pWindow);
		wrefresh(pTile->pWindow);	
		pTile->pPiece = NULL;
		pTile->isEmpty = 1;
}	
