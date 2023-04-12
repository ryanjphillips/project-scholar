#define _X_OPEN_SOURCE_EXTENDED
#include <ncurses.h>
#include <locale.h>
#include <wchar.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

// Struct Definitions
#include "./structs/coords/Coords.h"
#include "./structs/turnSummary/TurnSummary.h"
#include "./structs/gameState/GameState.h"
#include "./structs/dimensions/Dimensions.h"
#include "./structs/tile/Tile.h"
#include "./structs/chessboard/Chessboard.h"
#include "./structs/piece/Piece.h"
#include "./structs/player/Player.h"
#include "./structs/commands/Commands.h"

// Stuct Body
#include "./structs/dimensions/dimensions.c"
#include "./structs/tile/tile.c"
#include "./structs/chessboard/chessboard.c"
#include "./structs/piece/piece.c"
#include "./structs/player/player.c"
#include "./structs/commands/commands.c"


// Non-library file imports.
#include "./ui/menus/main-menu/mainMenu.c"
#include "./ui/colors/initColors.c"
#include "./engine/chessboard/determineSelectedTile.c"
#include "./engine/chessboard/refreshWindowArray.c"
#include "./engine/chessboard/addPieceToTile.c"
#include "./engine/chessboard/addPieceToTileSingle.c"
#include "./engine/chessboard/determinePieceSelection.c"
#include "./engine/chessboard/removeWindowBackground.c"
#include "./engine/chessboard/removePieceFromTile.c"
#include "./engine/chessboard/createPromotionWindows.c"
#include "./engine/chessboard/createPromotionTiles.c"
#include "./engine/chessboard/determineSelectedPromotion.c"


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
