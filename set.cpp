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
  //mostly terrible way to do this O((2n-1/)2)
  //otherwise mem usage would double or possible stack overflow with recusive
  cur = head;
  while( head != 0 ){
    while( cur->getNext() != 0 ){
      cur=cur->getNext();
    }
    delete cur;
  }  
}

template <class kind>
kind Set<kind>::next(){
  
  cur=cur->getNext();
  return cur->getData();

}


template <class kind>
void Set<kind>::add( kind addMe  ){
  Node<kind>* searchIndex = head;
  while( searchIndex ){
    if( addMe == searchIndex->getData() ){
      return;
    }
  }
  
  Node<kind>* addMeNode = new Node( cur->getNext() );
}


template <class kind>
int Set<kind>::rm(){
  if( head == 0 ){
    return -1;
  }

  Node <kind>* delme = cur;
  
  if( delme  == head ){
     
    head = head->getNext();
    delete delme;
     
  } else {
      delme = head;

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
