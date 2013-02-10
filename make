
all: test.cpp sll.o node.o
     g++ test.cpp sll.o node.o -o testsll

sll.o: sll.hxx sll.cpp node.o
     g++ -c sll.hxx sll.cpp node.o

node.o: node.hxx node.cpp
      g++ -c node.hxx node.cpp
