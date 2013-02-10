#ifndef NODE_SC
#define NODE_SC

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
