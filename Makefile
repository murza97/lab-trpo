gipo: main.o gipo.o
	gcc -Wall -o gipo main.o gipo.o -lm

main.o: main.c
	gcc -Wall -c main.c -lm

gipo.o: gipo.c 
	gcc -Wall -c gipo.c -lm

.PHONY: clean
clean:
	rm -rf gipo *.o
