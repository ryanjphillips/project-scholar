typedef struct BoardTile {
	WINDOW * tileWindow;
	int tileBackgroundColor;
	int tilePosition;
	_Bool tileIsEmpty;
	char tileHasPiece[]; 

} BoardTile;

struct BoardTile createWindow(int length, int width, int starty, int startx) {	

 struct BoardTile currentTile;

	// Editing Window Styles
	WINDOW *newWindow;
	newWindow = newwin(length, width, starty , startx );
	box(newWindow, ' ' , ' ');
	wborder(newWindow, ' ', ' ', ' ',' ',' ',' ',' ',' ');

	currentTile.tileWindow = newWindow;
	currentTile.tileBackgroundColor = 0;
	currentTile.tileIsEmpty = true;
	strcpy(currentTile.tileHasPiece, "Empty");

	return currentTile;
}
