void matchHistory(struct MatchHistory *pMatchHistory, struct Dimensions *pDimensions) {
   char matchHistoryBorder[9] = { 0, 0, 0, 0, 0, 0, 0, 0 };
   pMatchHistory->pWindow = createTileWindow(pDimensions->boardWidth, 20, pDimensions->boardHistoryStartingPosition.yCoord, pDimensions->boardHistoryStartingPosition.xCoord, matchHistoryBorder);
   wrefresh(pMatchHistory->pWindow);
}
