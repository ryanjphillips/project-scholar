#include "../pieces/Movement.h"

void determinePieceSelection(struct Tile *pTile, struct Piece *pPiece, struct Chessboard *pChessBoard, struct Tile *pPromotionTiles, PANEL **pPromotionPanel, int selectedPromotion) {
   char pieceName[20];
   strcpy(pieceName, pPiece->notation);

   switch (*pieceName) {
   case 'P':
      pawnMovement(pTile, pPiece, pChessBoard, pPromotionTiles, pPromotionPanel, selectedPromotion);
      break;

   case 'R':
      rookMovement(pTile, pPiece);
      break;

   case 'Q':
      queenMovement(pTile, pPiece);
      break;

   case 'B':
      bishopMovement(pTile, pPiece);
      break;

   case 'N':
      knightMovement(pTile, pPiece);
      break;

   case 'K':
      kingMovement(pTile, pPiece);
      break;
   }
   ;
}
