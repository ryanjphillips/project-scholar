#include "drawHorizontalLines.c"
#include "drawVerticalLines.c"
#include "drawHorizontalBorders.c"
#include "drawVerticalBorders.c"
#include "drawPhysicalNumberCoords.c"
#include "drawPhysicalLetterCoords.c"
#include "drawChessboardColor.c"
#include "drawEndIntersectingLines.c"
#include "drawInnerIntersectingLines.c"

void drawChessboard() {

	drawChessboardColor();
	drawHorizontalLines();
	drawVerticalLines();
	drawHorizontalBorders();
	drawPhysicalNumberCoords();
	drawPhysicalLetterCoords();
	drawVerticalBorders();
	drawEndIntersectingLines();
	drawInnerIntersectingLines();
}
