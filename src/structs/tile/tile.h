WINDOW *createTileWindow(int length , int width, int startY, int startX, char* pWindowBorder);
void getNotation(int column, int posCounter, char *pPosition);
int setTileColor(int row, int column);
void deleteTileWindow(Tile *pTile, int arraySize);

// Color Definitions
#define WHITE_SQUARE 1
#define BLACK_SQUARE 2
#define WHITE_PIECE_ON_BLACK 3
#define WHITE_PIECE_ON_WHITE 4 
#define BLACK_PIECE_ON_BLACK 5
#define BLACK_PIECE_ON_WHITE 6
#define BOARD_COLOR 7
#define TEXT_COLOR 8
#define TILE_SELECTED 9

#include "./functions/getNotation.c"
#include "./functions/setTileColor.c"
#include "./functions/createTileWindow.c"
#include "./functions/deleteTileWindow.c"
