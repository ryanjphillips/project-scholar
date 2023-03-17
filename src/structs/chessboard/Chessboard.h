typedef struct Chessboard {
	BoardTile tiles[64];
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
	int boardColums;
	int boardRows;
	int boardLength;
	int boardWidth;
  const char PHYSICALCORDNUMBERS[8] = {'1', '2', '3', '4', '5', '6', '7', '8'};
  const char PHYSICALCORDLETTERS[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}; 

} Chessboard;

