#include <ncurses.h>
#include <assert.h>

int main() {
  int ch, count=0;
  MEVENT event;

  initscr();
  raw();
  keypad(stdscr, TRUE);
  noecho();

  clear();
  cbreak();

  mousemask(ALL_MOUSE_EVENTS | REPORT_MOUSE_POSITION, NULL);

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
    }
    mvprintw(6, 1, "Event number: %4d",count);
    refresh();
  }
  endwin();
}
			//	if ((cursorY >= windowBeginningY && cursorY < windowEndingY + windowBeginningY) && (cursorX >= windowBeginningX && cursorX < windowEndingX + windowBeginningX))  { 
		  
			//		wbkgd(chessBoard[0], COLOR_PAIR(TILE_SELECTED));
			//	  wrefresh(chessBoard[0]);
			//	}
			// getbegyx(chessBoard[0], windowBeginningY, windowBeginningX);
			// getmaxyx(chessBoard[0], windowEndingY, windowEndingX);
			// getyx(stdscr, cursorY, cursorX);
			// printw("CURSOR Y: %d, CURSOR X: %d  ", cursorY, cursorX);
			// printw("WIDOW Y: %d, WINDOW X: %d  ", windowBeginningY, windowBeginningX);
			// printw("WIDOW Ending Y: %d, WINDOW Ending X: %d  ", windowBeginningY + windowEndingY, windowBeginningX + windowEndingX);
			
