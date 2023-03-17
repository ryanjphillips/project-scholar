#include <string.h>
#include <ctype.h>

char getNotation(int column, int row, int posCounter) {
	
	int position[20];
	int numbToString[20];
	memset(position, 0, sizeof(position));
	memset(numbToString, 0, sizeof(numbToString));

	if (column < 27) {
	  const char ALPHA[] = "abcdefghijklmnopqrstuvwxwyz";
		position = ALPHA[posCounter];
	} 

	sprintf(numbToString, "%d", posCounter);
	strcat(position, numbToString);
	return position;
}
