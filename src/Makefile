make:
	gcc -o main main.c -lmenu -lncursesw 

debug-options:
	gcc -g3 -o main main.c -lmenu -lncursesw

debug:
	gdb --annotate=3 main

valgrind:
	make debug-options
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=test.txt main
