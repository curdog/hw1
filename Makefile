all: main

main: main.cpp set.o node.o
	g++ main.cpp set.o -o testsll

set.o: set.hxx set.cpp node.o
	g++ -c set.hxx set.cpp node.o

node.o: node.hxx node.cpp
	g++ -c node.hxx node.cpp
