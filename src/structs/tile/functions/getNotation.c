#include <string.h>
#include <ctype.h>

void getNotation(int column, int posCounter, char *pPosition) {
	
	char numbToString[20];
	memset(pPosition, 0, sizeof(pPosition));
	memset(numbToString, 0, sizeof(numbToString));

	if (column < 27) {
	  char alpha[] = "abcdefghijklmnopqrstuvwxwyz";
		*pPosition = alpha[column];

	  sprintf(numbToString, "%d", posCounter);
	  strcat(pPosition, numbToString);
 }
}
