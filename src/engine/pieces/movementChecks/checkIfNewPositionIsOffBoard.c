int checkIfNewPositionIsOffBoard(int position, int newPosition) {

  int columnNumber = position % 8;
  const int COLUMN_BEGINNING = position - columnNumber;
  const int COLUMN_ENDING = (COLUMN_BEGINNING + 8)- 1;

  if (newPosition  < COLUMN_BEGINNING || 
        newPosition > COLUMN_ENDING || 
        newPosition < 0 || 
        newPosition >= 64) {

    return 1;
  }

	return 0;
}
