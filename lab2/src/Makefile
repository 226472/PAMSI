__start__: a.out
	./a.out

a.out: main.o mojatablica.o
	g++ main.o mojatablica.o
main.o: main.cpp mojatablica.hh
	g++ -c -Wall -pedantic main.cpp
mojatablica.o: mojatablica.hh mojatablica.cpp
	g++ -c -Wall -pedantic mojatablica.cpp