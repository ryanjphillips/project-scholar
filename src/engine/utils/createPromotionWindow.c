WINDOW *createPromotionWindow(int length, int width, int startY, int startX) {
   WINDOW *pWindow;
   pWindow = newwin(length, width, startY, startX);
   box(pWindow, ' ', ' ');
   wborder(pWindow, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ');

   return(pWindow);
}
