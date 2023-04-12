int checkIfPawnPositionIsOffBoard(int position, int newPosition) {
   int       columnNumber     = (position - 8) % 8;
   const int COLUMN_BEGINNING = (position - 8) - columnNumber;
   const int COLUMN_ENDING    = (COLUMN_BEGINNING + 8) - 1;

   /*
      printw("position : %d\n", position);
      printw("newPosition : %d\n", newPosition);
      printw("beg : %d\n", COLUMN_BEGINNING);
      printw("end : %d\n", COLUMN_ENDING);
    */

   if (newPosition < COLUMN_BEGINNING ||
       newPosition > COLUMN_ENDING ||
       newPosition < 0 ||
       newPosition >= 64) {
      return(1);
   }

   return(0);
}
