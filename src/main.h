#define _X_OPEN_SOURCE_EXTENDED
#include <ncurses.h>
#include <locale.h>
#include <wchar.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <stdio.h>

// Struct Definitions
#include "./structs/dimensions/Dimensions.h"
#include "./structs/tile/Tile.h"
#include "./structs/chessboard/Chessboard.h"
#include "./structs/piece/Piece.h"

// Stuct Body
#include "./structs/dimensions/dimensions.c"
#include "./structs/tile/tile.c"
#include "./structs/chessboard/chessboard.c"
#include "./structs/piece/piece.c"

// Non-library file imports.
#include "./ui/menus/main-menu/mainMenu.c"
#include "./ui/colors/initColors.c"
//#include "./engine/chessboard/determineSelectedTile.c"
#include "./engine/chessboard/refreshWindowArray.c"

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

// Bottom left to bottom right = length
// Top Left to bottom left = width
// Adding columns increases length
// Adding row increases width
// X axis is length
// Y axis is width
// Y = width = rows 
// X = length = columns 
