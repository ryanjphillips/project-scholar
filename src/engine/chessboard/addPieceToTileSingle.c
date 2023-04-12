void addPieceToTileSingle(struct Tile *pTile, int selectedIndex, int previousIndex) {
   int pieceBackGround;
   pieceBackGround = determinePieceColors(pTile[selectedIndex].backgroundColor);
   pTile[selectedIndex].isEmpty          = 0;
   pTile[selectedIndex].pPiece           = pTile[previousIndex].pPiece;
   pTile[selectedIndex].pPiece->position = selectedIndex;
   pTile[selectedIndex].pPiece->hasMoved = true;
   attron(COLOR_PAIR(pieceBackGround));
   mvwaddstr(pTile[selectedIndex].pWindow, pTile[selectedIndex].middleY, pTile[selectedIndex].middleX, pTile[previousIndex].pPiece->character);
   wrefresh(pTile[selectedIndex].pWindow);
   attroff(COLOR_PAIR(pieceBackGround));
}
