INCLUDE=-I ./thirdparty
INCLUDE1=-I ./src

all: bin/main bin/test

bin/main: obj/main.o obj/proc.o
	mkdir bin
	gcc -o bin/main obj/main.o obj/proc.o -Wall -lm

bin/test: obj/ctest.o
	gcc -o bin/test obj/ctest.o obj/proc.o -Wall -lm

test:	bin/test
	./bin/test

obj/main.o: src/main.c
	mkdir obj
	gcc $(INCLUDE1) -c src/main.c -Wall -o obj/main.o

obj/proc.o: src/proc.c
	gcc $(INCLUDE1) -c src/proc.c -Wall -o obj/proc.o -lm

obj/ctest.o: test/ctest.c
	gcc $(INCLUDE1) $(INCLUDE) -c test/ctest.c -Wall -o obj/ctest.o

.PHONY: clean
clean:
	rm -f -r bin/ obj/
