typedef struct Chessboard {
	Tile tiles[64];
	WINDOW *physicalBoard; 
	int innerBoardEndingY; 
	int innerBoardEndingX;
	int innerBoardBeginningY;
	int innerBoardBeginningX;
	int innerBoardCenterY;
	int innerBoardCenterX;
	int outerBoardEndingY;
	int outerBoardEndingX;
	int outerBoardBeginningY;
	int outerBoardBeginningX;
	int outerBoardCenterY;
	int outerBoardCenterX;
	int boardColumns;
	int boardRows;
	int boardLength;
	int boardWidth;
  char physicalCordNumbers[9];
  char physicalCordLetters[9];  

} Chessboard;

