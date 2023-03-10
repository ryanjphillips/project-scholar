WINDOW *createWindow(int height, int width, int starty, int startx) {	

	WINDOW *newWindow;
	newWindow = newwin(height, width, starty , startx );
	box(newWindow, 0 , 0);
	return newWindow;
}
