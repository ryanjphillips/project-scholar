void createPanelArray(struct Tile *pTile, PANEL **pPanel, int arraySize) {
   int counter;

   for (counter = 0; counter < arraySize; counter++) {
      pPanel[counter] = new_panel(pTile[counter].pWindow);
   }

   update_panels();
   doupdate();
}
