home = /home/ys/Code/project/project-scholar/src

make:
	gcc -o main main.c -lmenu -lncursesw -Wextra -Wall -Wfloat-equal

debug-options:
	gcc -g3 -o main main.c -lmenu -lncursesw

debug:
	gdb --annotate=3 main

valgrind:
	make debug-options
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=valgrind.txt main

uncrustify:
	find $(home) -type f -name '*.c' -exec uncrustify --no-backup -l=C {} + 
