void refreshPromotionWindows(struct Tile *pTile, int arraySize) {

	int counter;

	for (counter = 0; counter < arraySize; counter++) {

	  wborder(pTile[counter].pWindow, 0, 0, 0, 0, 0, 0, 0, 0);
		wrefresh(pTile[counter].pWindow);
	}
}
