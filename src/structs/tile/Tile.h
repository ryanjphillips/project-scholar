typedef struct Tile{
	WINDOW * pWindow;
	struct Piece *pPiece;
	int backgroundColor;
	int beginningY;
	int beginningX;
	int endingX;
	int endingY;
	int middleX;
	int middleY;
	int width;
	int length;
	_Bool isEmpty;
	char notation[10];
	_Bool isSelected;

} Tile;
