void updatePawnPromotion(struct Tile *pTile, struct Tile *pPromotion, int pawnPosition, PANEL **pPromotionPanel, int selectedPromotion) {
   pTile[pawnPosition].pPiece->name        = pPromotion[selectedPromotion].pPiece->name;
   pTile[pawnPosition].pPiece->character   = pPromotion[selectedPromotion].pPiece->character;
   pTile[pawnPosition].pPiece->piecePoints = pPromotion[selectedPromotion].pPiece->piecePoints;
   pTile[pawnPosition].pPiece->notation    = pPromotion[selectedPromotion].pPiece->notation;
   mvwaddstr(pTile[pawnPosition].pWindow, pTile[pawnPosition].middleY, pTile[pawnPosition].middleX, pPromotion[selectedPromotion].pPiece->character);
   pTile[pawnPosition].pPiece->hasPromoted = 1;

   hidePanelArray(pPromotionPanel, 4);
}
