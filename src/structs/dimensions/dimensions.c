void dimensions(struct Dimensions *pDimensions) {
   int tileWidth             = 7;
   int tileLength            = 12;
   int boardRows             = 8;
   int boardColumns          = 8;
   int boardStartingX        = 20;
   int boardHistoryStartingX = boardStartingX * 6;

   pDimensions->standardMaxScreenY = LINES;
   pDimensions->standardMaxScreenX = COLS;
   pDimensions->tileWidth          = tileWidth;
   pDimensions->tileLength         = tileLength;
   pDimensions->boardWidth         = tileWidth * boardRows;
   pDimensions->boardLength        = tileLength * boardColumns;
   pDimensions->rows    = boardRows;
   pDimensions->columns = boardColumns;
   pDimensions->boardStartingPosition.yCoord        = (pDimensions->standardMaxScreenY / 2) - (pDimensions->boardWidth / 2);
   pDimensions->boardStartingPosition.xCoord        = boardStartingX;
   pDimensions->boardHistoryStartingPosition.yCoord = (pDimensions->standardMaxScreenY / 2) - (pDimensions->boardWidth / 2);
   pDimensions->boardHistoryStartingPosition.xCoord = boardHistoryStartingX;
}
