#include "main.h"

int main() {

	// Variables 
	int ch;
	int selectedTile;
	int previousBackground; 
	int count;
	int tileLength;
	int tileWidth;
	MEVENT event;

	// Ncurses setup 
	setlocale(LC_ALL, "");
	initscr();
	cbreak();
	clear();
  raw();
  keypad(stdscr, TRUE);
  mousemask(ALL_MOUSE_EVENTS | REPORT_MOUSE_POSITION, NULL);
	noecho();
	clear();
  cbreak();
	start_color();
	refresh();
	initColors();

	struct Dimensions boardDimensions;
	struct Tile boardTiles[64];
	struct Piece boardPieces[32];
	struct Chessboard chessBoard;

	dimensions(&boardDimensions);
	tile(boardTiles, &boardDimensions);
	refreshWindowArray(boardTiles);
	chessboard(&chessBoard, boardTiles);

	getch();
	endwin();
	return 0;
}
