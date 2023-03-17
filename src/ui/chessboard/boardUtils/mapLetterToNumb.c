#include <string.h>
#include <ctype.h>

void mapLetterToNumb(int numb, char * charArray) {

	if (numb < 27) {
	  char ALPHA[] = "abcdefghijklmnopqrstuvwxwyz";
		*charArray = ALPHA[numb];
	} 
}
