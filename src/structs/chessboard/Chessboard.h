typedef struct Chessboard {
	Tile tiles[64];
	WINDOW *physicalBoard; 
	int boardColumns;
	int boardRows;
	int boardLength;
	int boardWidth;
	int innerBoardEndingY; 
	int innerBoardEndingX;
	Coords innerBoardBeginning;
	int innerBoardCenterY;
	int innerBoardCenterX;
	Coords innerBoardTopRight;
	Coords innerBoardBottomLeft;
	Coords outerBoardEnding;
	Coords outerBoardBeginning;
	Coords outerBoardCenter;
	Coords userCapturedPieces;
	Coords opponentCapturedPieces;
  char physicalCordNumbers[9];
  char physicalCordLetters[9];  

} Chessboard;

