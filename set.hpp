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

//pre-defs for linking problems in some compilers
template<class kind> class Set;
template<class kind> std::ostream& operator<< (std::ostream& osObject, const Set<kind>& );

template <class kind> class Set {
  
public:
  
  Set(  );
  ~Set();

  /*functions*/
  kind next();
  void add( kind );
  int rm( );
  kind getCur( );
  bool search( kind );

  //declaration must be here to link properly
  friend std::ostream& operator<<  (std::ostream& outp, const Set<kind>& obj1){
    Node<kind>* counter = obj1.head;
    while(counter) // as long as counter is not null, there is more in the list                                                                                                                                    
      {
	/*outputs rows by 4*/
	for (int col = 0; col < 4 && counter != 0; col++)
	  {
	    /*moving current and extracting data from each node*/
	    
	    outp << counter->getData() << "\t";
	    counter = counter->getNext();
	  }/*end first for loop*/
	
	/*jumps to the next row*/
	outp << std::endl;
      } /*end while loop*/
    return outp;
  }


private:
/*pointers*/
  Node<kind>* head;
  Node<kind>* cur;
};

//cleaner way to have the compiler like the code for template classes, except for the <<operator. Can't figure that one out.
#include "set.cpp"

#endif
