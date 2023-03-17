// #include "chessboard.h"
void drawPhysicalBoard() {

	const int MIDDLEOFSCREENROWS = LINES / 2;
	const int MIDDLEOFSCREENCOLUMNS = COLS / 2;

	WINDOW *window;
	int boardWidth = BOARDWIDTH + (2 * BOARDTILEWIDTH);
	int boardLength = BOARDLENGTH + (2 * BOARDTILELENGTH);
	int boardStartingYPos = MIDDLEOFSCREENROWS - (BOARDWIDTH / 2) - BOARDTILEWIDTH;
	int boardStartingXPos = MIDDLEOFSCREENCOLUMNS - (BOARDLENGTH / 2) - BOARDTILELENGTH;

	window = createWindow(boardWidth, boardLength, boardStartingYPos, boardStartingXPos);
	wbkgd(window, COLOR_PAIR(init_color(COLOR_RED, 0, 1000, 0)));
	wrefresh(window);
}
