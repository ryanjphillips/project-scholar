void removeWindowBackground(struct Tile *pTile, int arraySize) {
   int counter;

   for (counter = 0; counter < arraySize; counter++) {
      if (pTile[counter].isSelected == true) {
         box(pTile[counter].pWindow, 0, 0);
         wborder(pTile[counter].pWindow, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ');
         wrefresh(pTile[counter].pWindow);
         pTile[counter].isSelected = false;
      }
   }
}
