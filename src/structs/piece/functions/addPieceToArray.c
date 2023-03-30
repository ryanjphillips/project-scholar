void addPieceToArray(struct Piece *pDestinationArray, struct Piece *pSourceArray) {

  int counter;

  for (counter = 0; counter < 32; counter++) {

    pDestinationArray[counter].name =  pSourceArray[counter].name;
    pDestinationArray[counter].character =  pSourceArray[counter].character;
    pDestinationArray[counter].position =  pSourceArray[counter].position;
    pDestinationArray[counter].piecePoints=  pSourceArray[counter].piecePoints;
    pDestinationArray[counter].blackOrWhite =  pSourceArray[counter].blackOrWhite;
    pDestinationArray[counter].notation = pSourceArray[counter].notation;
    pDestinationArray[counter].hasMoved = pSourceArray[counter].hasMoved;
  }
}
