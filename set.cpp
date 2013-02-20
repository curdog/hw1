#include <ostream>
#include "set.hpp"
#include "node.hpp"
#include <iostream>

//for use of NULL, to clarify some parts of the code
#include <cstdlib>

template <class kind>
Set<kind>::Set(  ){
  /*initialize*/
  head = NULL;
  cur = NULL;
}

template <class kind>
Set<kind>::~Set(){
  //using rm() no need to double code
  cur = head;
  while ( rm() != -1 );
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
  cur = cur->getNext();
  
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
      
      delme->setNext( delme->getNext()->getNext() ); //prev node link chaining
      delme = cur; //to node to be deleted, cur does not get changed thoughout here
      
      /*delete delme*/
      delete delme;
      cur = head;
      return 0;
  }
  
  return -1; //something very wrong must have happend to get to here.
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
