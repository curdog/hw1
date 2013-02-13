#include <iostream>
#include "set.hxx"
#include "node.hxx"


template <class kind>
Set<kind>::Set(  ){
  head = 0;
  curr = 0;
}

template <class kind>
Set<kind>::~Set(){
  while( head != 0 ){
    while( cur->getNext() != 0 ){
      cur=cur->getNext();
    }
    delete cur;
    cur = head;
  }  
}

template <class kind>
kind Set<kind>::next(){
  
  cur=cur->getNext();
  return cur->getData();

}


template <class kind>
kind Set<kind>::add( kind addMe  ){
  return 0;
}


template <class kind>
int Set<kind>::rm(){
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
kind* Set<kind>::cur(){
  return cur;
}

template <class kind>
void Set<kind>::retToHead(){
  cur = head;
}

template <class kind>
bool Set<kind>::search( kind s ){
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
