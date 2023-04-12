#include "main.h"

int main() { // Variables
   int    ch;
   int    selectedTile;
   int    selectedPromotion;
   int    previousTile;
   int    backgroundColor;
   int    determinePieceColor;
   char   pieceColor[20];
   MEVENT event;

   // Ncurses setup
   setlocale(LC_ALL, "");
   initscr();
   cbreak();
   clear(); raw();
   keypad(stdscr, TRUE);
   mousemask(ALL_MOUSE_EVENTS | REPORT_MOUSE_POSITION, NULL);
   noecho();
   clear();
   cbreak();
   start_color();
   refresh();
   initColors();
   curs_set(0);

   struct Dimensions boardDimensions;
   struct Tile       boardTiles[64];
   struct Piece      boardPieces[32];
   struct Chessboard chessBoard;
   struct Player     whitePlayer;
   WINDOW *          promotionWindows[4];
   struct Tile       promotionTiles[4];
   struct Commands   commandWindow;


   // Starting Board
   player(&whitePlayer);
   dimensions(&boardDimensions);
   tile(boardTiles, &boardDimensions);
   refreshWindowArray(boardTiles);
   piece(boardPieces);
   chessboard(&chessBoard, boardTiles);
   addPieceToTile(boardTiles, boardPieces, 32);

   // Initialized values

   selectedTile      = 0;
   selectedPromotion = 0;
   previousTile      = 0;
   backgroundColor   = 0;

   // Chess Event Loop

   while ((ch = getch()) != 'q') {
      if (ch == KEY_MOUSE) {
         if (getmouse(&event) == OK) {
            selectedTile      = determineSelectedTile(boardTiles, event.y, event.x);
            selectedPromotion = determineSelectedPromotion(promotionTiles, event.y, event.x);

            // First Determine if the move is an legal square on the board.

            if (selectedTile != -1) {
               // Second determine if the mouse click is to make a move with an already selected piece.

               if (boardTiles[selectedTile].isSelected == true) {
                  addPieceToTileSingle(boardTiles, selectedTile, previousTile);
                  removePieceFromTile(&boardTiles[previousTile]);
                  removeWindowBackground(boardTiles, 64);
                  wbkgd(boardTiles[previousTile].pWindow, COLOR_PAIR(boardTiles[previousTile].backgroundColor));
                  wrefresh(boardTiles[previousTile].pWindow);

                  // If not a mouse click to make an already selected piece, then determine if the tile has a valid piece.
               }
               else if (boardTiles[selectedTile].isEmpty == 0) {
                  strcpy(pieceColor, boardTiles[selectedTile].pPiece->blackOrWhite);
                  determinePieceColor = strcmp(pieceColor, "White");

                  // If the color of the piece is the players then we can precede with the "picking up of the piece."
                  if (determinePieceColor == 0) {
                     removeWindowBackground(boardTiles, 64);
                     wbkgd(boardTiles[previousTile].pWindow, COLOR_PAIR(boardTiles[previousTile].backgroundColor));
                     wrefresh(boardTiles[previousTile].pWindow);
                     backgroundColor = COLOR_PAIR(boardTiles[selectedTile].backgroundColor);
                     wbkgd(boardTiles[selectedTile].pWindow, backgroundColor);
                     wrefresh(boardTiles[selectedTile].pWindow);
                     determinePieceSelection(boardTiles, boardTiles[selectedTile].pPiece, &chessBoard, promotionTiles, selectedPromotion);
                     wbkgd(boardTiles[selectedTile].pWindow, COLOR_PAIR(TILE_SELECTED));
                     wrefresh(boardTiles[selectedTile].pWindow);
                  }
                  else if (determinePieceColor != 0) {
                     removeWindowBackground(boardTiles, 64);
                     wbkgd(boardTiles[previousTile].pWindow, COLOR_PAIR(boardTiles[previousTile].backgroundColor));
                     wrefresh(boardTiles[previousTile].pWindow);
                  }

                  // If the tile is an empty non-selectable tile then we need to clear the current selection.
               }
               else if (boardTiles[selectedTile].isEmpty == 1) {
                  removeWindowBackground(boardTiles, 64);
                  wbkgd(boardTiles[previousTile].pWindow, COLOR_PAIR(boardTiles[previousTile].backgroundColor));
                  wrefresh(boardTiles[previousTile].pWindow);
               }

               previousTile = selectedTile;

               // Logic For Pawn Promotion
            }
            else if (selectedPromotion != -1) {
               //printw("%p\n", &promotionTiles[selectedPromotion]);
               //determinePieceSelection(boardTiles, boardTiles[previousTile].pPiece, &chessBoard, promotionTiles, selectedPromotion);

               // Edge Case: Clicking off the board to remove selected piece UI.
            }
            else if (previousTile != -1) {
               removeWindowBackground(boardTiles, 64);
               wbkgd(boardTiles[previousTile].pWindow, COLOR_PAIR(boardTiles[previousTile].backgroundColor));
               wrefresh(boardTiles[previousTile].pWindow);
            }
         }
      }

      else if (ch == ':') {
         commands(&commandWindow);
      }
   }

   // Cleanup

   deleteTileWindow(promotionTiles, 4);
   deleteTileWindow(boardTiles, 64);
   delwin(stdscr);
   endwin();
   return(0);
}
