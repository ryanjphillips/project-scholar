#include "main.h"
int main() {
   // Variables
   int  ch;
   int  selectedTile;
   int  selectedPromotion;
   int  previousTile;
   int  backgroundColor;
   int  determinePieceColor;
   char pieceColor[20];

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

   MEVENT event;
   PANEL *promotionPanel[4];

   struct Dimensions   boardDimensions;
   struct Tile         boardTiles[64];
   struct Piece        boardPieces[32];
   struct Chessboard   chessBoard;
   struct Player       whitePlayer;
   WINDOW *            promotionWindows[4];
   struct Tile         promotionTiles[4];
   struct Commands     commandWindow;
   struct MatchHistory boardMatchHistory;

   struct Piece promotionPieces[4] = {
      { "White Queen",  WHITEQUEEN,  0, 9, "White", "Q", true, 0 },
      { "White Knight", WHITEKNIGHT, 1, 3, "White", "N", true, 0 },
      { "White Rook",   WHITEROOK,   2, 5, "White", "R", true, 0 },
      { "White Bishop", WHITEBISHOP, 3, 3, "White", "B", true, 0 }
   };

   // Starting Board

   player(&whitePlayer);
   dimensions(&boardDimensions);
   tile(boardTiles, &boardDimensions);
   refreshWindowArray(boardTiles);
   piece(boardPieces);
   chessboard(&chessBoard, boardTiles);
   addPieceToTile(boardTiles, boardPieces, 32);
   createPromotionWindows(&chessBoard, promotionWindows, boardTiles[0].length);
   createPromotionTiles(promotionTiles, promotionWindows, promotionPieces, 4);
   matchHistory(&boardMatchHistory, &boardDimensions);

   // Creation of the Promotion Panel

   createPanelArray(promotionTiles, promotionPanel, 4);
   hidePanelArray(promotionPanel, 4);

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
               // Second determine if the mouse click is to make a move with an already selected piece. Move piece.

               if (boardTiles[selectedTile].isSelected == true) {
                  addPieceToTileSingle(boardTiles, selectedTile, previousTile);
                  removePieceFromTile(&boardTiles[previousTile]);
                  clearBoardSelection(boardTiles, previousTile);

                  // If not a mouse click to make an already selected piece, then determine if the tile has a valid piece.
               }
               else if (boardTiles[selectedTile].isEmpty == 0) {
                  strcpy(pieceColor, boardTiles[selectedTile].pPiece->blackOrWhite);
                  determinePieceColor = strcmp(pieceColor, "White");

                  // If the color of the piece is the players then we can precede with the "picking up of the piece."
                  if (determinePieceColor == 0) {
                     clearBoardSelection(boardTiles, previousTile);
                     backgroundColor = COLOR_PAIR(boardTiles[selectedTile].backgroundColor);
                     wbkgd(boardTiles[selectedTile].pWindow, backgroundColor);
                     wrefresh(boardTiles[selectedTile].pWindow);
                     determinePieceSelection(boardTiles, boardTiles[selectedTile].pPiece, &chessBoard, promotionTiles, promotionPanel, selectedPromotion, selectedTile, previousTile);
                     wbkgd(boardTiles[selectedTile].pWindow, COLOR_PAIR(TILE_SELECTED));
                     wrefresh(boardTiles[selectedTile].pWindow);
                  }

                  //
                  else if (determinePieceColor != 0) {
                     clearBoardSelection(boardTiles, previousTile);
                  }

                  // If the tile is an empty non-selectable tile then we need to clear the current selection.
               }
               else if (boardTiles[selectedTile].isEmpty == 1) {
                  clearBoardSelection(boardTiles, previousTile);
               }

               previousTile = selectedTile;

               // Logic For Pawn Promotion
            }
            else if (selectedPromotion != -1 && boardTiles[previousTile].pPiece->hasPromoted == 0) {
               showPanelArray(promotionPanel, 4);
               determinePieceSelection(boardTiles, boardTiles[previousTile].pPiece, &chessBoard, promotionTiles, promotionPanel, selectedPromotion, 0, 0);
               clearBoardSelection(boardTiles, previousTile);

               // Edge Case: Clicking off the board to remove selected piece UI.
            }
            else if (previousTile != -1) {
               clearBoardSelection(boardTiles, previousTile);
            }
         }
      }

      else if (ch == ':') {
         commands(&commandWindow);
         mvwaddch(commandWindow.commandWindow, 0, 0, ch);
         attron(COLOR_PAIR(COLOR_BLACK));
         wrefresh(commandWindow.commandWindow);
         attroff(COLOR_PAIR(COLOR_BLACK));
      }
   }

   // Cleanup

   deleteTileWindow(promotionTiles, 4);
   deleteTileWindow(boardTiles, 64);
   delwin(stdscr);
   endwin();
   return(0);
}
