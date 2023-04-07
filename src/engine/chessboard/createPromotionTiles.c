void createPromotionTiles(struct Tile *pTile, WINDOW **pWindowArray, int arraySize) {
	
	int counter;
	int windowBegX = 0;
	int windowBegY = 0;
	int windowEndX = 0;
	int windowEndY = 0;

	for (counter = 0; counter < arraySize; counter++ ) {

		getbegyx(pWindowArray[counter], windowBegY, windowBegX);
		getmaxyx(pWindowArray[counter], windowEndY, windowEndX);

		pTile[counter].beginningY = windowBegY;
		pTile[counter].beginningX = windowBegX;
		pTile[counter].endingY = windowBegY + windowEndY;
		pTile[counter].endingX = windowBegX + windowEndX;
		pTile[counter].pWindow = pWindowArray[counter];
	}
}
