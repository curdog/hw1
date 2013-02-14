#ifndef SLL_SC
#define SLL_SC

#include "node.hxx"

template <class kind> class Set {

public:
  Set(  );
  virtual ~Set();

  kind next();
  void add( kind, int );
  int rm( );
  kind getCur( );
  void retToHead();
  bool search( kind );

protected:
  Node<kind>* head;
  Node<kind>* cur;
};


#endif
