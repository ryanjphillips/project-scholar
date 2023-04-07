WINDOW *createTileWindow(int length , int width, int startY, int startX, char *pWindowBorder) {
	WINDOW *pWindow;
	pWindow = newwin(length, width, startY , startX );
	wborder(pWindow, pWindowBorder[0], pWindowBorder[1], pWindowBorder[2],pWindowBorder[3],pWindowBorder[4],pWindowBorder[5],pWindowBorder[6],pWindowBorder[7]);

	return pWindow;
}
