#define _X_OPEN_SOURCE_EXTENDED
#include <ncurses.h>
#include <locale.h>
#include <wchar.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <stdio.h>

// Non-library file imports.
#include "./ui/chessboard/drawChessboard.c"
#include "./ui/menus/main-menu/mainMenu.c"
#include "./ui/colors/initColors.c"
#include "./engine/board/gameStart.c"
#include "./engine/board/determineSelectedTile.c"

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
