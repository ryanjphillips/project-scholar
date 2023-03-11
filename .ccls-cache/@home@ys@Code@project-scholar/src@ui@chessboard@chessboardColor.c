int chessboardColor() {

	int currentBoardColumn;
	int currentBoardRow;
	int currentTileRow;
	int currentTileColumn;
	int boardCheckeredColor;
	int boardColorXCoord;
	int boardColorYCoord;

	for (currentBoardColumn = 0; currentBoardColumn < BOARDCOLUMNS; currentBoardColumn++) {
		for (currentBoardRow = 0; currentBoardRow < BOARDROWS; currentBoardRow++) {
					if ( currentBoardRow % 2 == 0) {
						if (currentBoardColumn % 2 != 0) {

							boardCheckeredColor = BLACK_SQUARE;
						} else {

							boardCheckeredColor = WHITE_SQUARE;
						} 

					} else if (currentBoardRow % 2 != 0) {
						if (currentBoardColumn % 2 != 0) {
							boardCheckeredColor = WHITE_SQUARE;
						} else {

							boardCheckeredColor = BLACK_SQUARE;
						} 
					} 

			for (currentTileColumn = 0; currentTileColumn < BOARDTILEHEIGHT; currentTileColumn++) {
				for (currentTileRow = 0; currentTileRow < BOARDTILEWIDTH; currentTileRow++) {
					attron(COLOR_PAIR(boardCheckeredColor));
					boardColorXCoord = BOARDSTARTINGXCOORD + currentBoardRow * BOARDTILEWIDTH + currentTileRow;
					boardColorYCoord = BOARDSTARTINGYCOORD + currentBoardColumn * BOARDTILEHEIGHT + currentTileColumn; 
					mvaddstr(boardColorYCoord, boardColorXCoord, " ");
					attroff(COLOR_PAIR(boardCheckeredColor));
					
				}
			}
		}
	}
	return 0;
}
