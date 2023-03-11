#include "./boardUtils/createWindow.c"
#include "./drawFunctions/drawPhysicalBoard.c"
#include "./drawFunctions/drawTiles.c"
#include "./drawFunctions/drawPhysicalLetterCoords.c"
#include "./drawFunctions/drawPhysicalNumberCoords.c"

void drawChessboard() {
	
	drawPhysicalBoard();
	drawTiles();
	//drawPhysicalNumberCoords(); 
	//drawPhysicalLetterCoords();
}
