void commands(struct Commands *pCommands) {
	char windowBorder[9] = {' ',' ',' ',' ',' ',' ',' ',' '};
	pCommands->commandWindow = createTileWindow(1, COLS, LINES - 1, 0, windowBorder);	

	attron(COLOR_PAIR(init_color(COLOR_WHITE, 0,0,0)));
	wbkgd(pCommands->commandWindow, COLOR_PAIR(init_color(COLOR_WHITE, 0,0,0)));
	wrefresh(pCommands->commandWindow);
	attroff(COLOR_PAIR(init_color(COLOR_WHITE, 0,0,0)));
}

