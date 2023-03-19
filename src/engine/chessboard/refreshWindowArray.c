void refreshWindowArray(struct Tile *pTileArray) {

	int arraySize;
	for (arraySize = 0; arraySize < 64; arraySize++) {

		attron(COLOR_PAIR(pTileArray[arraySize].backgroundColor));
		wbkgd(pTileArray[arraySize].pWindow, COLOR_PAIR(pTileArray[arraySize].backgroundColor));
		wrefresh(pTileArray[arraySize].pWindow);
		attroff(COLOR_PAIR(pTileArray[arraySize].backgroundColor));
	}
}
