#include <iostream>
#include "sll.hxx"
#include "node.hxx"

template <class kind>
Sll<kind>::Sll(  ){
  head = 0;
  curr = 0;
}

template <class kind>
Sll<kind>::~Sll(){
  
}

template <class kind>
kind Sll<kind>::next(){
  index++;
  cur=cur->getNext();
  return cur->getData();

}


template <class kind>
kind Sll<kind>::add( kind addMe  ){
  return 0;
}


template <class kind>
int rm(){
  if( head == 0 ){
    return -1;
  }

  node <kind>* delme = cur;
  if( index == 0 ){
     head = cur->getNext();
    cur = head;
    delete cur;
  } else {
      node<kind>* prev = head;

      while( prev->getNext() != cur ){
	prev = prev->getNext();
      }

      cur = prev;
      prev = cur->getNext();
      delete prev;
    
  }
}

template <class kind>
kind* Sll<kind>::cur(){
  return cur;
}

template <class kind>
void Sll<kind>::retToHead(){
  cur = head;
}

template <class kind>
bool search( kind s ){
  node<kind>* searchIndex = head;
  while( searchIndex ){
    if( searchIndex->getData() == s ){
      cur = searchIndex;
      return true;
    }
    searchIndex = searchIndex->getNext();
  }
  return false;
}
