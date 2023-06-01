home = /home/ys/Code/project/project-scholar/src
valgrindFile = valgrind.txt
file = main
CC = gcc
flags =  -lmenuw -lpanelw -lcdk -lncursesw -Wextra -Wall -Wfloat-equal

make:
	$(CC) -o $(file) $(file).c $(flags) 

debug-options:
	$(CC) -g3 -o $(file) $(file).c $(flags) 

debug:
	gdb --annotate=3 $(file)

valgrind:
	make debug-options
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=${valgrindFile} $(file)

uncrustify:
	find $(home) -type f -name '*.c' -exec uncrustify --no-backup -l=C {} + 
