#ifndef SLL_SC
#define SLL_SC

#include "node.hxx"

template <kind> class Sll {
public:
  virtual Sll(kind* head = 0 );
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
