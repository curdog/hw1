#ifndef SLL_SC
#define SLL_SC

#include "node.hxx"

template <kind> class Set {
public:
  virtual Set(kind* head = 0 );
  virtual ~Set();

  kind* next();
  void add( kind, int );
  int rm( );
  kind* cur( );
  void retToHead();
  bool search( kind );

protected:
  node<kind>* head;
  node<kind>* cur;
};


#endif
