#define _X_OPEN_SOURCE_EXTENDED
#include <ncurses.h>
#include <locale.h>
#include <wchar.h>

// Define black and white square variables for ncurses init_pair().

#define WHITE_SQUARE 1
#define BLACK_SQUARE 2
#define WHITE_PIECE_ON_BLACK 3
#define WHITE_PIECE_ON_WHITE 4
#define BLACK_PIECE_ON_BLACK 5
#define BLACK_PIECE_ON_WHITE 6
#define BOARD_COLOR 7

// Link to more information on the following unicode symbols:
// https://unicodeplus.com/U+2654
// Declaring and Initializing black chess piece unicode, UTF-8 encoding.

const char BLACKPAWN[] = "\xE2\x99\x9F";
const char BLACKROOK[] = "\xE2\x99\x9C";
const char BLACKBISHOP[] = "\xE2\x99\x9D";
const char BLACKKNIGHT[] = "\xE2\x99\x9E";
const char BLACKQUEEN[] = "\xE2\x99\x9B";
const char BLACKKING[] = "\xE2\x99\x9A";

// Declaring and Initializing white chess piece unicode, UTF-8 encoding.

const char WHITEPAWN[] = "\xE2\x99\x99";
const char WHITEROOK[] = "\xE2\x99\x96";
const char WHITEBISHOP[] = "\xE2\x99\x97";
const char WHITEKNIGHT[] = "\xE2\x99\x98";
const char WHITEQUEEN[] = "\xE2\x99\x95";
const char WHITEKING[] = "\xE2\x99\x94";

// Starting Arrays of chess pieces.

const char *WHITEPIECESSTART[6]; 
const char *BLACKPIECESSTART[6];

// Defining starting dimensions of chessboard.


const int BOARDSTARTINGYCOORD = 10;
const int BOARDSTARTINGXCOORD = 100;
const int BOARDTILEWIDTH = 10;
const int BOARDTILEHEIGHT = 5;
const int BOARDCOLUMNS = 8;
const int BOARDROWS = 8;
const int BOARDENDINGXCOORD = BOARDSTARTINGXCOORD + BOARDCOLUMNS * BOARDTILEWIDTH;
const int BOARDENDINGYCOORD = BOARDSTARTINGYCOORD + BOARDROWS * BOARDTILEHEIGHT;

// Defining "physical" numbers and coordinates for the chess board.

const char PHYSICALCORDNUMBERS[8] = {'1', '2', '3', '4', '5', '6', '7', '8'};
const char PHYSICALCORDLETTERS[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}; 
