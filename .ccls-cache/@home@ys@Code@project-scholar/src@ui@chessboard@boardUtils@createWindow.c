WINDOW * createWindow(int length, int width, int starty, int startx) {	

	WINDOW *newWindow;
	newWindow = newwin(length, width, starty , startx );
	box(newWindow, ' ' , ' ');
	wborder(newWindow, ' ', ' ', ' ',' ',' ',' ',' ',' ');
	return newWindow;
}
