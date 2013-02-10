#include "node.hxx"

template <class prim>
Node<prim>::Node( prim * datas ){
  data = datas;
}

template <class prim>
Node<prim>::Node(prim * datas, Node<prim>* next ){
  data = datas;
  nextNode = next;
}

template <class prim>
Node<prim>::~Node( ){
  delete data;
}

template <class prim>
prim* Node<prim>::getNext(){
  return data;
}

template <class prim>
void Node<prim>::setNext( Node<prim> * next ){
  data = next;
}

template <class prim>
void Node<prim>::setDatas( prim *datas){
  data = datas;
}
