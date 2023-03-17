#include "BoardTile.h"

struct BoardTile createWindow(int length, int width, int starty, int startx) {	
  struct BoardTile currentTile;
	int windowBeginningY;
	int windowBeginningX;
	int windowEndingY;
	int windowEndingX;

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
