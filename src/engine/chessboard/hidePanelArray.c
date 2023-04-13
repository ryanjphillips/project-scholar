void hidePanelArray(PANEL **pPanelArray, int arraySize) {
   int counter;

   for (counter = 0; counter < arraySize; counter++) {
      hide_panel(pPanelArray[counter]);
   }

   update_panels();
   doupdate();
}
