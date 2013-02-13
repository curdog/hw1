all: test

test.o: test.cpp set.o node.o
	g++ test.cpp set.o node.o -o testsll

set.o: sll.hxx set.cpp node.o
       g++ -c set.hxx set.cpp node.o

node.o: node.hxx node.cpp
	g++ -c node.hxx node.cpp
