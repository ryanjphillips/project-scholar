#include <ncurses.h>

int main() {
	initscr();
	cbreak();
	noecho();
	clear();
	start_color();

	int middleY = LINES / 2;
	int middleX = COLS / 2;

	int maxY = LINES;
	int maxX = COLS;


	int startY = 1;
	int startX = 1;
	int endY = maxY - 1;
	int endX = maxX - 1; 


	int i;
	int j;

	int xInc = 0;
	int yInc = 0;

	for (i = startX; i <= endX; i++) {
		for (j = startY; j <= endY; j++) {
			if (i == middleX ) {
				mvaddstr(j, i, "*");
			}

			if (j == middleY) {
				mvaddstr(j,i, "*");
			}
		}
	}

	int centerX = middleX;
	int centerY = middleY;

	int xTerm = 1;
	int yTerm = 0 + centerY;

	for (i = centerX; i <= endX; i++) {
		for (j = yTerm; j <= middleY +; j++) {
			if (i == xTerm) {
				mvaddstr(j, i, "*");
				xTerm = xTerm + 1;
			}
		}
	}

	getch();
	endwin();
	return 0;
}
