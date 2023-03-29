#include <stdbool.h>
void addPieceToTileSingle(struct Tile *pTile, struct Tile *pPreviousTile, int selectedIndex, int previousIndex) {
	int pieceBackGround;

		pieceBackGround = determinePieceColors(pTile[selectedIndex].backgroundColor);

		// This is segfaulting when I try to assign an bool value, but for some reason if I assign it to a string/char then it works.
		// After adding a piece to the newely selected tile is should be filled.
		//pTile[selectedIndex].isEmpty = false;	

		pTile[selectedIndex].pPiece = pPreviousTile[previousIndex].pPiece;
		attron(COLOR_PAIR(pieceBackGround));
		mvwaddstr(pTile[selectedIndex].pWindow, pTile[selectedIndex].middleY, pTile[selectedIndex].middleX, pPreviousTile[previousIndex].pPiece->character);
		wrefresh(pTile[selectedIndex].pWindow);
		attroff(COLOR_PAIR(pieceBackGround));
}
