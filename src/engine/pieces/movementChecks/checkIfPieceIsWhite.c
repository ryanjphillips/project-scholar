int checkIfPieceIsWhite(char *pPieceColor) {
	char pieceColor[30];
	int determinePieceColor;
	strcpy(pieceColor, pPieceColor);
	determinePieceColor = strcmp(pieceColor, "White");

	return determinePieceColor;
}
