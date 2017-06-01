__start__: a.out
	./a.out

a.out: main.o czas.o stos.o kolejka.o lista.o
	g++ -Wall -pedantic main.o czas.o stos.o kolejka.o lista.o
obj/main.o: main.cpp lista.hh
	g++ -c -Wall -pedantic main.cpp
obj/czas.o: czas.hh tablicax2.hh czas.cpp
	g++ -c -Wall -pedantic czas.cpp
obj/stos.o: stos.hh istack.hh czas.hh stos.cpp
	g++ -c -Wall -pedantic stos.cpp
obj/kolejka.o: kolejka.hh iqueue.hh stos.hh kolejka.cpp
	g++ -c -Wall -pedantic kolejka.cpp
obj/lista.o: lista.hh ilist.hh kolejka.hh lista.cpp
	g++ -c -Wall -pedantic lista.cpp
clean:	
	rm  -f *.o test
