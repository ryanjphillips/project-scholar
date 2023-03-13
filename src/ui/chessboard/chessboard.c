#include "chessboard.h"
#include "drawChessboard.c"

int chessboard() {
	int ch;
	MEVENT event;
	int windowBeginningY, windowBeginningX;
	int windowEndingY, windowEndingX;

	WINDOW * chessBoard[64] = {0};
	drawTiles(chessBoard);
	
	for (int i = 0; i <= 63; i++) {

		attron(COLOR_PAIR(TEXT_COLOR));
		wrefresh(chessBoard[i]);
    attroff(COLOR_PAIR(TEXT_COLOR));
	}


  mousemask(ALL_MOUSE_EVENTS | REPORT_MOUSE_POSITION, NULL);
	int count;

	getbegyx(chessBoard[0], windowBeginningY, windowBeginningX);
	getmaxyx(chessBoard[0], windowEndingY, windowEndingX);

  while ((ch = getch()) != 'q')
  {
    count++;
    mvprintw(1, 1, "Has mouse: %d", has_mouse());
    mvprintw(2, 1, "Key code: %x; mouse code:%x", ch, KEY_MOUSE);
    if (ch == KEY_MOUSE)
    {
      assert(getmouse(&event) == OK);
      mvprintw(3, 3, "Mouse Event: x=%d, y=%d z=%d",
               event.x, event.y, event.z);
      mvprintw(4, 3, "Mouse device id: %x", event.id);
      mvprintw(5, 3, "Mouse button mask: %x", event.bstate);

			if ((event.y >= windowBeginningY && event.y < windowEndingY + windowBeginningY) && (event.x >= windowBeginningX && event.x < windowEndingX + windowBeginningX))  { 
		  
					wbkgd(chessBoard[0], COLOR_PAIR(TILE_SELECTED));
				  wrefresh(chessBoard[0]);
			}
    }
    mvprintw(6, 1, "Event number: %4d",count);
    refresh();
  }

	return 0;
}

