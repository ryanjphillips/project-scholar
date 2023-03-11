int determineWindowBackgroundColor(int column, int row) {
	int boardCheckeredColor;
	if ( row % 2 == 0) {
		if (column % 2 != 0) {

			boardCheckeredColor = BLACK_SQUARE;
		} else {

			boardCheckeredColor = WHITE_SQUARE;
		} 

	} else if (row % 2 != 0) {
		if (column % 2 != 0) {
			boardCheckeredColor = WHITE_SQUARE;
		} else {

			boardCheckeredColor = BLACK_SQUARE;
		} 
	} 

	return boardCheckeredColor;
}
