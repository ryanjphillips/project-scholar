#include <ncurses.h>
void displayLegalMoves(struct Tile *pTile, int sizeOfArray) {

	int counter;

	for (counter = 0; counter < sizeOfArray; counter++) {
		box(pTile[counter].pWindow, 0, 0);
		wborder(pTile[counter].pWindow, ' ', ' ', ' ', ' ', ACS_ULCORNER, ACS_URCORNER, ACS_LLCORNER, ACS_LRCORNER);
		wrefresh(pTile[counter].pWindow);
	}
}
