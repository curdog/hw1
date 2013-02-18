#include <ostream>
#include "set.hpp"
#include "node.hpp"
#include <iostream>
#include <cstdlib>

template <class kind>
Set<kind>::Set(  ){
  /*initialize*/
  head = NULL;
  cur = NULL;
}

template <class kind>
Set<kind>::~Set(){
  //mostly terrible way to do this, go to close to the last node then delete 
  //otherwise mem usage would double or possible stack overflow with recusive
  
  /*while head is not 0, current = head */
  while( head != NULL ){
    cur = head;
    while( cur->getNext()->getNext() != NULL ){
      
      cur=cur->getNext();
      
    }/*end while*/
    /*deletes current*/
    delete cur->getNext();
    cur->setNext(NULL);
  }/*end while*/
  if( head != NULL ){
    delete head;
  }
  
}/*ends ~Set*/

template <class kind>
kind Set<kind>::next(){
  
  /*gets next*/
  cur=cur->getNext();
  /*returns value*/
  return cur->getData();

}/*next*/


template <class kind>
void Set<kind>::add( kind addMe  ){
  Node<kind>* searchIndex;
  searchIndex = head;
  if( head == NULL ){
    head = new Node<kind>( addMe );
    cur = head;
    return;
  }
  
  while( searchIndex != NULL ){
    
    if( addMe == searchIndex->getData() ){
      return;
    }/*ends if*/
    searchIndex = searchIndex->getNext();
  }/*ends while*/

  Node<kind>* addMeNode = new Node<kind>( addMe, cur->getNext() );
  cur->setNext( addMeNode );
  
}/*add*/


template <class kind>
int Set<kind>::rm( ){
  if( this->head == NULL ){
    return -1;
  }/*ends if*/

  Node <kind>* delme = cur;
  
  if( delme  == head ){
     
    head = head->getNext();
    cur = head;
    delete delme;
    return 0;
  }  else {
      delme = head;

      while( delme->getNext() != cur ){
	delme = delme->getNext();
      }

      cur = delme; //set to previous node
      cur->setNext( cur->getNext()->getNext() );
      delme = cur->getNext();//to delme
      /*delete delme*/
      delete delme;
      return 0;
  }
  
  return -1;
}/*rm*/


//should throw exception if null, though for this homework it will return 0/NULL
template <class kind>
kind Set<kind>::getCur(){
  /*if cur return value*/
  if( cur ){
    return cur->getData();
  }/*ends if*/ else {
    return 0;
  }/*ends else*/
}/*getCur*/

template <class kind>
void Set<kind>::retToHead(){
  /*move cur to head*/
  cur = head;
}/*retToHead*/

template <class kind>
bool Set<kind>::search( kind s ){
  Node<kind>* searchIndex = head;
  while( searchIndex ){
    /*if searchIndex == s, return true*/
    if( searchIndex->getData() == s ){
      cur = searchIndex;
      return true;
    }/*ends if*/
    searchIndex = searchIndex->getNext();
  }/*ends while*/
  /*return false*/
  return false;
}/*search*/


