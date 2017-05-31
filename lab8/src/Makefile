__start__: a.out
	./a.out

a.out: main.o czas.o drzewo.o
	g++ -Wall -pedantic main.o czas.o drzewo.o
obj/main.o: main.cpp czas.hh
	g++ -c -Wall -pedantic main.cpp
obj/czas.o: czas.hh drzewo.hh czas.cpp
	g++ -c -Wall -pedantic czas.cpp
obj/drzewo.o: drzewo.hh drzewo.cpp wykonywalny.hh wezelAVL.hh
	g++ -c -Wall -pedantic drzewo.cpp
clean:	
	rm  -f *.o test
