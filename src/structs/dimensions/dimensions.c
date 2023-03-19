void dimensions(struct Dimensions *pDimensions) {
	int standardMaxScreenY;
	int standardMaxScreenX;
	int tileWidth = 7;
	int tileLength = 12;
	int boardRows = 8;
	int boardColumns = 8;

	pDimensions->standardMaxScreenY = LINES;
	pDimensions->standardMaxScreenX = COLS;
	pDimensions->tileWidth = tileWidth;  
	pDimensions->tileLength = tileLength;
	pDimensions->boardWidth = tileWidth * boardRows;
	pDimensions->boardLength = tileLength * boardColumns;
	pDimensions->rows = boardRows;
	pDimensions->columns = boardColumns;
}
