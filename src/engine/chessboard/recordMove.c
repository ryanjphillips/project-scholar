void recordMove(struct TurnSummary *pTurnSummary, struct GameState *pGameState, struct Tile *pTile, int selection, int previousSelection) {
   int round = pGameState->turnNumber;
   move(0, 0);
   char finalString[20] = { 0 };

   strcat(finalString, pTile[selection].pPiece->notation);
   strcat(finalString, pTile[previousSelection].notation);
   strcat(finalString, " ");
   strcat(finalString, pTile[selection].pPiece->notation);
   strcat(finalString, pTile[selection].notation);

   pTurnSummary->whitesTurn[round] = finalString;
}
