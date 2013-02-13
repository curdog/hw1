#ifndef SET
#define SLL

#include "node.hxx"

template <class kind> class Sll {
public:
  Sll(kind* head = 0 );
  virtual ~Sll();
  kind* next();
  void add( kind, int );
  int rm( );
  kind* cur( );
  int curIndex( );
  void retToHead();

  bool search( kind );
protected:
  node<kind>* head;
  node<kind>* cur;
};


#endif
