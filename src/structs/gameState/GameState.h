typedef struct GameState {
	char *pEvent;
	char *pSite;
	char *pDate;
	char *pRound;
	char *pWhite;
	char *pBlack;
	char *pResult;
	char *pTimeControl;
	char *pWhiteElo;
	char *pBlackElo;
	char *pTermination;
	int turnNumber;
	TurnSummary turnSummaryArray[];

} GameState;
