// CLASS PROVIDED:  Node 
//
// CONSTRUCTOR for the Node class:
//   Node( <>)
//     Description:  	Initializes a new node with data
//     Preconditions:  none
//     Postcondition:  New Node with data as well as a next Node = NULL
//
//   Node( <>, Node<>)
//     Description:  	Initializes a new node with data and a next node
//     Preconditions:  none
//     Postcondition:  New Node with data as well as a next Node
//
// MEMBER FUNCTIONS for the Node class
//   void setNext (const string value)
//     Description:  	
//     Precondition:  
//     Postcondition:  
//
//   Node<> getNext  (const float value)
//     Description:  	
//     Precondition:  value >=6.50 and <=25.75
//     Postcondition:  hourly rate set to value
//
//   void setDatas (const string value)
//     Description:  	
//     Precondition:  
//     Postcondition:  
//
//   void getData  (const int value)
//     Description:  	
//     Precondition:  
//     Postcondition: 
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


