typedef struct BoardTile {
	WINDOW * tileWindow;
	int tileBackgroundColor;
	int tilePosition;
	_Bool tileIsEmpty;
	char tileHasPiece[]; 

} BoardTile;
