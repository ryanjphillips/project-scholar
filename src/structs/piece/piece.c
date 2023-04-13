#include "piece.h"
void piece(struct Piece *pPiece) {
   struct Piece pieces[32] = {
      { "Black Rook",   BLACKROOK,   0,  5, "Black", "R", false, 0 },
      { "Black Knight", BLACKKNIGHT, 1,  3, "Black", "N", false, 0 },
      { "Black Bishop", BLACKBISHOP, 2,  3, "Black", "B", false, 0 },
      { "Black Queen",  BLACKQUEEN,  3,  9, "Black", "Q", false, 0 },
      { "Black King",   BLACKKING,   4,  0, "Black", "K", false, 0 },
      { "Black Bishop", BLACKBISHOP, 5,  3, "Black", "B", false, 0 },
      { "Black Knight", BLACKKNIGHT, 6,  3, "Black", "N", false, 0 },
      { "Black Rook",   BLACKROOK,   7,  5, "Black", "R", false, 0 },
      { "Black Pawn",   BLACKPAWN,   8,  1, "Black", "P", false, 0 },
      { "Black Pawn",   BLACKPAWN,   9,  1, "Black", "P", false, 0 },
      { "Black Pawn",   BLACKPAWN,   10, 1, "Black", "P", false, 0 },
      { "Black Pawn",   BLACKPAWN,   11, 1, "Black", "P", false, 0 },
      { "Black Pawn",   BLACKPAWN,   12, 1, "Black", "P", false, 0 },
      { "Black Pawn",   BLACKPAWN,   13, 1, "Black", "P", false, 0 },
      { "Black Pawn",   BLACKPAWN,   14, 1, "Black", "P", false, 0 },
      { "Black Pawn",   BLACKPAWN,   15, 1, "Black", "P", false, 0 },
      { "White Rook",   WHITEROOK,   56, 5, "White", "R", false, 0 },
      { "White Knight", WHITEKNIGHT, 57, 3, "White", "N", false, 0 },
      { "White Bishop", WHITEBISHOP, 58, 3, "White", "B", false, 0 },
      { "White Queen",  WHITEQUEEN,  59, 9, "White", "Q", false, 0 },
      { "White King",   WHITEKING,   60, 0, "White", "K", false, 0 },
      { "White Bishop", WHITEBISHOP, 61, 3, "White", "B", false, 0 },
      { "White Knight", WHITEKNIGHT, 62, 3, "White", "N", false, 0 },
      { "White Rook",   WHITEROOK,   63, 5, "White", "R", false, 0 },
      { "White Pawn",   WHITEPAWN,   48, 1, "White", "P", false, 0 },
      { "White Pawn",   WHITEPAWN,   49, 1, "White", "P", false, 0 },
      { "White Pawn",   WHITEPAWN,   50, 1, "White", "P", false, 0 },
      { "White Pawn",   WHITEPAWN,   51, 1, "White", "P", false, 0 },
      { "White Pawn",   WHITEPAWN,   52, 1, "White", "P", false, 0 },
      { "White Pawn",   WHITEPAWN,   53, 1, "White", "P", false, 0 },
      { "White Pawn",   WHITEPAWN,   54, 1, "White", "P", false, 0 },
      { "White Pawn",   WHITEPAWN,   55, 1, "White", "P", false, 0 }
   };

   addPieceToArray(pPiece, pieces);
}
