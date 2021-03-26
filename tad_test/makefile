MAIN = main
TAD = tad_teste

all:
	gcc -c $(TAD).c
	gcc main.c $(TAD).o -o $(MAIN)
	./$(MAIN)
	rm *.o
	rm $(MAIN)