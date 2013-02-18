// CLASS PROVIDED:  Set
//
// CONSTRUCTOR for the Set class:
//   Set()
//     Description:  	constructor will initialize head = 0, cur = 0
//     Preconditions:  none
//     Postcondition:  last has been set to default, first has been set to default, hours worked has been set to 10, and houly rate has been set to 10.0
//
// MODIFICATION MEMBER FUNCTIONS for the Fraction class
//   void add (<kind> addme)
//     Description:    Adds an element of type kind in the set if the element does not already exist
//     Precondition:   none
//     Postcondition:  new element in set
//
//   void rm ()
//     Description:  	delete current node
//     Precondition:    Non-empty set
//     Postcondition:   node is deleted, return value removed
//
//   void search (kind s)
//     Description:  	search for value
//     Precondition:    read value passed and search for value in list
//     Postcondition:   value found = true, value not found = false
//
//
//   void retToHead ()
//     Description:  	return current to head
//     Precondition:    none
//     Postcondition:   head is the new current
//   
//
// CONSTANT MEMBER FUNCTIONS for the Set class
//   <kind>  getCur (void) const
//     Description:     Gets current elements data
//     Preconditions:   none
//     Postcondition:   return current->getData
//
//   operator<< overload
//     Description:     Overrides the << operator for stream usage
//     Preconditions:   none
//     Postcondition:   Prints values neatly on screen, line dup in columns, 4 per line. 


#ifndef _SET_SC
#define _SET_SC

#include "node.hpp"
#include <ostream>

template <class kind> class Set {
  
public:
  /*friend function*/
  friend std::ostream& operator<<  (std::ostream&, const Set<kind>&);
  Set(  );
  virtual ~Set();

  /*functions*/
  kind next();
  void add( kind );
  int rm( );
  kind getCur( );
  void retToHead();
  bool search( kind );


private:
/*pointers*/
  Node<kind>* head;
  Node<kind>* cur;
};

#include "set.cpp"

#endif
