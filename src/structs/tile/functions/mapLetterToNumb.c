#include <string.h>
#include <ctype.h>

void mapLetterToNumb(int numb, char * pCharArray) {

	if (numb < 27) {
	  char ALPHA[] = "abcdefghijklmnopqrstuvwxwyz";
		*pCharArray = ALPHA[numb];
	} 
}
