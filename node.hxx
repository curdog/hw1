// CLASS PROVIDED:  Node 
//
// CONSTRUCTOR for the Node class:
//   Node()
//     Description:  	constructor will initialize Employee objects
//     Preconditions:  none
//     Postcondition:  last has been set to default, first has been set to default, hours worked has been set to 10, and houly rate has been set to 10.0
//
// MODIFICATION MEMBER FUNCTIONS for the Node class
//   void add (const string value)
//     Description:  	set the first name to default
//     Precondition:  value <= 15 characters and no spaces
//     Postcondition:  first name has been set to value
//
//   void search (const string value)
//     Description:  	set the last name to default
//     Precondition:  value <= 15 characters and no spaces
//     Postcondition:  last name set to value
//
//   void rm  (const int value)
//     Description:  	set the hours worked
//     Precondition:  value >=0 and <=50
//     Postcondition:  hours worked set to value
//
//   void display  (const float value)
//     Description:  	set the hourly rate
//     Precondition:  value >=6.50 and <=25.75
//     Postcondition:  hourly rate set to value
//
// CONSTANT MEMBER FUNCTIONS for the Employee class
//   string getFirst (void) const
//     Description:  	read a valid first name, from the file, that is <=15 characters with no spaces
//     Preconditions:  none
//     Postcondition:  the first name is returned
//
//   string getLast(void) const
//     Description:      read a valid last name, from the file, that is <=15 characters with no spaces
//     Preconditions:  none
//     Postcondition:  the last name is returned
//
//   int getWorked  (void) const
//     Description:  	read a valid hours worked, from the file, that is between 0 and 50 hours
//     Preconditions:  none
//     Postcondition:  the hours worked is returned
//
//   float getRate  (void) const
//     Description:  	read a valid hourly rate, from the file, that is between 6.50 to 25.75
//     Preconditions:  none
//     Postcondition:  the hourly rate is returned
//
//   void display (void) const
//     Description:  	display employee name and gross pay
//     Preconditions:  none
//     Postcondition:  employees name is displayed (last, first) and gross pay 


#ifndef NODE
#define NODE

template <class prim> class Node{

public:
  Node( prim* datas );
  Node( prim* datas, Node<prim> *next );
  ~Node();
  
  prim* getNext();
  void setNext( Node<prim> *next );
  void setDatas( prim* datas );

protected:
  prim* data;
  Node<prim> *nextNode;
};
#endif
