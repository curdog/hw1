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
//     Description:    Adds an element of type kind in the set if the element does not already exist
//     Precondition:   none
//     Postcondition:  new element in set
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


#ifndef _Set_SC
#define _Set_SC

#include "node.hpp"
#include <ostream>

template <class kind> class Set {
  
public:
  friend std::ostream& operator<<  (std::ostream&, const Set<kind>&);
  Set(  );
  virtual ~Set();

  kind next();
  void add( kind );
  int rm( );
  kind getCur( );
  void retToHead();
  bool search( kind );

private:
  Node<kind>* head;
  Node<kind>* cur;
};

#include "set.cpp"

#endif
