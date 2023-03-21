typedef struct Piece {
	char *name; 
	const char *character;
	int position;
	int piecePoints;
	char *blackOrWhite;
	char *notation;
	_Bool hasMoved;
} Piece;
