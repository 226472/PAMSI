__start__: a.out
	./a.out

a.out: main.o czas.o tablicao1.o 
	g++ -Wall -pedantic main.o czas.o tablicao1.o 
obj/main.o: main.cpp czas.hh
	g++ -c -Wall -pedantic main.cpp
obj/tablicao1.o: tablicao1.hh wykonywalny.hh tablicao1.cpp
	g++ -c -Wall -pedantic tablicao1.cpp
obj/czas.o: czas.hh tablicao1.hh czas.cpp
	g++ -c -Wall -pedantic czas.cpp
clean:	
	rm  -f *.o test
