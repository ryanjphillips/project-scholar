typedef struct BoardTile {
	WINDOW * tileWindow;
	int tileBackgroundColor;
	int tilePosition; 
	int tileBeginningY;
	int tileBeginningX;
	int tileEndingX;
	int tileEndingY;
	int tileMiddleX;
	int tileMiddleY;
	_Bool tileIsEmpty;
	char tilePieceName[32];
	char tileNotation[32];

} BoardTile;
