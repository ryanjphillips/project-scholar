#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
  setlocale(LC_CTYPE, "");
	wchar_t whiteSquare = 0x25A0;
	wchar_t blackSquare = 0x25A1;
	int i, j;

	for (i = 0; i < 8; i++) {
		for (j = 0; j < 4; j++){

			if(i % 2 == 0 ) {
			 wprintf(L"%lc", whiteSquare);
			 wprintf(L"%lc", blackSquare);
			}

			else {
			  wprintf(L"%lc", blackSquare);
				wprintf(L"%lc", whiteSquare);
			}
		}

		wprintf(L"\n");
  }

	return 0;
}
