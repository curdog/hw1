// CLASS PROVIDED:  Node 
//
// CONSTRUCTOR for the Node class:
//   Node( <prim>)
//     Description:  	Initializes a new node with data
//     Preconditions:  none
//     Postcondition:  New Node with data as well as a next Node = NULL
//
// MEMBER FUNCTIONS for the Node class
//   void setNext (const string value)
//     Description:  	set the first name to default
//     Precondition:  value <= 15 characters and no spaces
//     Postcondition:  first name has been set to value
//
//   void setDatas (const string value)
//     Description:  	set the last name to default
//     Precondition:  value <= 15 characters and no spaces
//     Postcondition:  last name set to value
//
//   void getData  (const int value)
//     Description:  	set the hours worked
//     Precondition:  value >=0 and <=50
//     Postcondition:  hours worked set to value
//
//   void display  (const float value)
//     Description:  	set the hourly rate
//     Precondition:  value >=6.50 and <=25.75
//     Postcondition:  hourly rate set to value
//


#ifndef _NODE_C
#define _NODE_C

template <class prim> class Node{

public:
  Node( prim );
  Node( prim, Node<prim> * );
  ~Node();
  
  Node<prim>* getNext();
  void setNext( Node<prim>* );
  void setDatas( prim );
  prim getData();
private:
  prim data;
  Node<prim> *nextNode;
};

#include "node.cpp"

#endif


