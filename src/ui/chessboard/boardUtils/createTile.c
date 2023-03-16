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

struct BoardTile createWindow(int length, int width, int starty, int startx) {	
struct BoardTile currentTile;
	int windowBeginningY;
	int windowBeginningX;
	int windowEndingY;
	int windowEndingX;

	// Editing Window Styles
	WINDOW *newWindow;
	newWindow = newwin(length, width, starty , startx );
	box(newWindow, ' ' , ' ');
	wborder(newWindow, ' ', ' ', ' ',' ',' ',' ',' ',' ');
	getbegyx(newWindow, windowBeginningY, windowBeginningX);
	getmaxyx(newWindow, windowEndingY, windowEndingX);
	
	currentTile.tileBeginningY = windowBeginningY;
	currentTile.tileBeginningX = windowBeginningX;
	currentTile.tileEndingY = windowBeginningY + windowEndingY;
	currentTile.tileEndingX = windowBeginningX + windowEndingX;
	currentTile.tileMiddleY = windowEndingY / 2 - 1;
	currentTile.tileMiddleX = windowEndingX / 2 - 1 ;
	
	currentTile.tileWindow = newWindow;
	currentTile.tileBackgroundColor = 0;
	currentTile.tileIsEmpty = true;
	strcpy(currentTile.tilePieceName, "None");
	strcpy(currentTile.tileNotation, "None");
	
	return currentTile;
}
