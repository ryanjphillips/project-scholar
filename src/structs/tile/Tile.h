typedef struct Tile{
	WINDOW * pWindow;
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
	char pieceName[30];
	char notation[10];

} Tile;
