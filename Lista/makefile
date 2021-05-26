MAIN=main

TAD_LISTA=lista_dupla

all:
	@echo "compilando..."
	gcc -c $(TAD_LISTA).c -o $(TAD_LISTA).o
	gcc $(MAIN).c $(TAD_LISTA).o -o $(MAIN)
	./$(MAIN)
	rm *.o
	rm $(MAIN)