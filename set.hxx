// CLASS PROVIDED:  Set
//
// CONSTRUCTOR for the Set class:
//   Set()
//     Description:  	constructor will initialize head = 0, cur = 0
//     Preconditions:  none
//     Postcondition:  last has been set to default, first has been set to default, hours worked has been set to 10, and houly rate has been set to 10.0
//
// MODIFICATION MEMBER FUNCTIONS for the Fraction class
//     void add (kind addme)
//     Description:  	set data = next
//     Precondition:  value <= 15 characters and no spaces
//     Postcondition:  first name has been set to value
//
//   void rm ()
//     Description:  	delete current node
//     Precondition:  head ==0, return -1
//     Postcondition:  node is deleted, return value removed
//
//   void search (kind s)
//     Description:  	search for value
//     Precondition:  read value passed and search for value in list
//     Postcondition:  value found = true, value not found = false
//
//
//   void retToHead ()
//     Description:  	return current to head
//     Precondition:  none
//     Postcondition:  head is the new current
//   
//
// CONSTANT MEMBER FUNCTIONS for the Employee class
//   string getCur (void) const
//     Description:  	get current
//     Preconditions:  none
//     Postcondition:  return current->getData
//
//   void display (void) const
//     Description:  	display all values in Set
//     Preconditions:  none
//     Postcondition:  print values neatly on screen, line dup in columns, 4 per line 


#ifndef SLL_SC
#define SLL_SC

#include "node.hxx"
#include <iostream>

template <class kind> class Set {
  
  friend ostream& operator<< (ostream&, const Set&);

public:
  Set(  );
  virtual ~Set();

  kind next();
  void add( kind );
  int rm( );
  kind getCur( );
  void retToHead();
  bool search( kind );

protected:
  Node<kind>* head;
  Node<kind>* cur;
};


#endif
