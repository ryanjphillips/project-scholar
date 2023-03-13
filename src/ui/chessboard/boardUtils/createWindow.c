#include <ncurses.h>
WINDOW * createTile(int length, int width, int starty, int startx) {	

	typedef struct {
		WINDOW * window;
		int position;
		int color;
	} boardTile;

	WINDOW *newWindow;
	newWindow = newwin(length, width, starty , startx );
	box(newWindow, ' ' , ' ');
	wborder(newWindow, ' ', ' ', ' ',' ',' ',' ',' ',' ');
	return newWindow;
}
