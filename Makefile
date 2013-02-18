all: main

main: main.cpp set.o node.o
	g++ main.cpp set.o -o testsll

set.o: set.hpp set.cpp node.o
	g++ -c set.hpp set.cpp 

node.o: node.hpp node.cpp
	g++ -c node.hpp node.cpp
