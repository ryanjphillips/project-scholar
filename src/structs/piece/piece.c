#include "piece.h"
void piece(struct Piece *pPiece)   {

  struct Piece pieces[32] = {
    {"Black Rook", BLACKROOK, 0, 5, 2, "R"},
    {"Black Knight", BLACKKNIGHT, 1, 3, 2, "N"},
    {"Black Bishop", BLACKBISHOP, 2, 3, 2, "B"},
    {"Black Queen", BLACKQUEEN, 3, 9, 2, "Q"},
    {"Black King", BLACKKING, 4, 0, 2, "K"},
    {"Black Bishop", BLACKBISHOP, 5,3, 2, "B"},
    {"Black Knight", BLACKKNIGHT, 6, 3, 2, "N"},
    {"Black Rook", BLACKROOK, 7, 5, 2, "R"},
    {"Black Pawn", BLACKPAWN, 8, 1, 2,"P"},
    {"Black Pawn", BLACKPAWN, 9, 1, 2,"P"},
    {"Black Pawn", BLACKPAWN, 10, 1, 2,"P"},
    {"Black Pawn", BLACKPAWN, 11, 1, 2,"P"},
    {"Black Pawn", BLACKPAWN, 12, 1, 2,"P"},
    {"Black Pawn", BLACKPAWN, 13, 1, 2,"P"},
    {"Black Pawn", BLACKPAWN, 14, 1, 2,"P"},
    {"Black Pawn", BLACKPAWN, 15, 1, 2,"P"},
    {"White Rook", WHITEROOK, 56, 5,1, "N"},
    {"White Knight", WHITEKNIGHT, 57, 3,1, "N"},
    {"White Bishop", WHITEBISHOP, 58, 3,1, "B"},
    {"White Queen", WHITEQUEEN, 59, 9,1, "Q"},
    {"White King", WHITEKING, 60, 0,1, "K"},
    {"White Bishop", WHITEBISHOP, 61,3,1, "B"},
    {"White Knight", WHITEKNIGHT, 62, 3,1, "N"},
    {"White Rook", WHITEROOK, 63, 5,1, "R"},
    {"White Pawn", WHITEPAWN, 48, 1,1,"P"},
    {"White Pawn", WHITEPAWN, 49, 1,1,"P"},
    {"White Pawn", WHITEPAWN, 50, 1,1,"P"},
    {"White Pawn", WHITEPAWN, 51, 1,1,"P"},
    {"White Pawn", WHITEPAWN, 52, 1,1,"P"},
    {"White Pawn", WHITEPAWN, 53, 1,1,"P"},
    {"White Pawn", WHITEPAWN, 54, 1,1,"P"},
    {"White Pawn", WHITEPAWN, 55, 1,1,"P"}

  };

  addPieceToArray(pPiece, pieces);
}
