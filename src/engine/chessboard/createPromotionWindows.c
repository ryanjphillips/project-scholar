void createPromotionWindows(struct Chessboard *pChessBoard, WINDOW **pWindowArray, int length) {
   int  counter;
   int  promotionWindowX         = 0;
   int  promotionWindowY         = 0;
   int  tileLength               = length;
   char promotionWindowBorder[9] = { 0, 0, 0, 0, 0, 0, 0, 0 };

   promotionWindowY = pChessBoard->boardBeginning.yCoord - 5;
   promotionWindowX = pChessBoard->boardBeginning.xCoord + (pChessBoard->boardLength * .25);

   for (counter = 0; counter < 4; counter++) {
      pWindowArray[counter] = createTileWindow(5, length, promotionWindowY, promotionWindowX + (tileLength * counter), promotionWindowBorder);
   }
}
