MAIN=main
TADMATRIZ=tad_matriz

all:
	@echo "compilando"
	gcc -c $(TADMATRIZ).c -o $(TADMATRIZ).o 
	gcc $(MAIN).c $(TADMATRIZ).o -o $(MAIN)

run:
	./$(MAIN)

clean:
	rm *.o
	rm $(MAIN)