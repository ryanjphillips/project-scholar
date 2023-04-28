void clearBoardSelection(struct Tile *pBoardTiles, int selection) {
   removeWindowBackground(pBoardTiles, 64);
   wbkgd(pBoardTiles[selection].pWindow, COLOR_PAIR(pBoardTiles[selection].backgroundColor));
   wrefresh(pBoardTiles[selection].pWindow);
}
