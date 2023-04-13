void showPanelArray(PANEL **pPanelArray, int arraySize) {
   int counter;

   for (counter = 0; counter < arraySize; counter++) {
      show_panel(pPanelArray[counter]);
   }

   update_panels();
   doupdate();
}
