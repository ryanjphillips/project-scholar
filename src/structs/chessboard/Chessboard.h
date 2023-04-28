typedef struct Chessboard {
	int boardColumns;
	int boardRows;
	int boardLength;
	int boardWidth;
	Coords boardEnding;
	Coords boardBeginning;
	Coords boardCenter;
	Coords boardTopRight;
	Coords boardBottomLeft;
	Coords userCapturedPieces;
	Coords opponentCapturedPieces;

} Chessboard;

