#include <assert.h>
#include <stdbool.h>

#define WHITE_SQUARE 1
#define BLACK_SQUARE 2
#define WHITE_PIECE_ON_BLACK 3
#define WHITE_PIECE_ON_WHITE 4 
#define BLACK_PIECE_ON_BLACK 5
#define BLACK_PIECE_ON_WHITE 6
#define BOARD_COLOR 7
#define TEXT_COLOR 8
#define TILE_SELECTED 9

// Board Positions

char BOARDPOS[64][10] = {0};

// Defining starting dimensions of chessboard.

// Bottom left to bottom right = length
// Top Left to bottom left = width
// Adding columns increases length
// Adding row increases width
// X axis is length
// Y axis is width
// Y = width = rows 
// X = length = columns 

// Hard coded length and width of each tile.
const int BOARDTILEWIDTH = 6;
const int BOARDTILELENGTH = 12;

//Amount of columns and rows for the chessboard.
const int BOARDCOLUMNS = 8;
const int BOARDROWS = 8;

// Calculation of the board length.
const int BOARDLENGTH = BOARDTILELENGTH * BOARDCOLUMNS;
const int BOARDWIDTH = BOARDTILEWIDTH * BOARDROWS; 

// Defining "physical" numbers and coordinates for the chess board.

const char PHYSICALCORDNUMBERS[8] = {'1', '2', '3', '4', '5', '6', '7', '8'};
const char PHYSICALCORDLETTERS[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}; 
