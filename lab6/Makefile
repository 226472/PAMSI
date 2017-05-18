__start__: a.out
	./a.out

a.out: main.o czas.o  lista.o tabasocjac.o
	g++ -Wall -pedantic main.o czas.o  lista.o tabasocjac.o
obj/main.o: main.cpp czas.hh
	g++ -c -Wall -pedantic main.cpp
obj/czas.o: czas.hh tabasocjac.hh czas.cpp
	g++ -c -Wall -pedantic czas.cpp
obj/lista.o: lista.hh lista.cpp wezel.hh
	g++ -c -Wall -pedantic lista.cpp
obj/tabasocjac.o: tabasocjac.hh tabasocjac.cpp iasociative.hh lista.hh wykonywalny.hh
clean:	
	rm  -f *.o test
