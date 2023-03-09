#include "getMiddleOfColumn.c"
#include "getMiddleOfRow.c"

void drawPiece(int xCoord, int yCoord, const char * chessPiece, int backGroudColor) {
	attron(COLOR_PAIR(backGroudColor));
	mvaddstr(getMiddleOfRow(yCoord), getMiddleOfColumn(xCoord), chessPiece);
	attroff(COLOR_PAIR(backGroudColor));
}
