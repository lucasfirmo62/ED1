MAIN = main
TAD1 = tad_timer1
TAD2  = tad_timer2

all:
	gcc -c $(TAD1).c
	gcc -c $(TAD2).c
	gcc main.c $(TAD1).o -o $(MAIN)
	gcc main.c $(TAD2).o -o $(MAIN)
	./$(MAIN)
	rm *.o
	rm $(MAIN)