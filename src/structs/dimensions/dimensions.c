void dimensions(Dimensions *pDimensions) {
	int standardMaxScreenY;
	int standardMaxScreenX;
	int tileWidth = 6;
	int tileLength = 12;
	int boardRows = 8;
	int boardColumns = 8;

	getmaxyx(stdscr, standardMaxScreenY, standardMaxScreenX);
	pDimensions.tileWidth = tileWidth;  
	pDimensions.tileLength = tileLength;
	pDimensions.startingY = standardMaxScreenY - ((tileWidth * boardRows) / 2); 
	pDimensions.startingX = standardMaxScreenX - ((tileLength * boardColumns) / 2); 
	pDimensions.rows = boardRows;
	pDimensions.colums = boardColumns;
}
