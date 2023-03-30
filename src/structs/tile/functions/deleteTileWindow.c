void deleteTileWindow(Tile *pTile, int arraySize) {

	int counter;

	for (counter = 0; counter < arraySize; counter++) {

		box(pTile[counter].pWindow, ' ', ' ');
		wborder(pTile[counter].pWindow, ' ', ' ', ' ',' ',' ',' ',' ',' ');
		wrefresh(pTile[counter].pWindow);
		delwin(pTile[counter].pWindow);
	}
}
