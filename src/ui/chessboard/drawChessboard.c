#include "drawHorizontalLines.c"
#include "drawVerticalLines.c"
#include "drawHorizontalBorders.c"
#include "drawVerticalBorders.c"

void drawChessboard() {

	drawHorizontalLines();
	drawVerticalLines();
	drawHorizontalBorders();
	drawVerticalBorders();
}
