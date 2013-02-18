#include <ostream>
#include "set.hpp"
#include "node.hpp"
#include <iostream>

template <class kind>
Set<kind>::Set(  ){
  /*initialize*/
  head = 0;
  cur = 0;
}

template <class kind>
Set<kind>::~Set(){
  //mostly terrible way to do this, go to close to the last node then delete 
  //otherwise mem usage would double or possible stack overflow with recusive
  
  /*while head is not 0, current = head */
  while( head != 0 ){
    cur = head;
    while( cur->getNext() != 0 ){
      cur=cur->getNext();
    }/*end while*/
    /*deletes current*/
    delete cur;
  }/*end while*/  
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
  Node<kind>* searchIndex = head;
  while( searchIndex ){
    if( addMe == searchIndex->getData() ){
      return;
    }/*ends if*/
  }/*ends while*/

  Node<kind>* addMeNode = new Node<kind>( addMe, cur->getNext() );
  cur->setNext( addMeNode );

}/*add*/


template <class kind>
int Set<kind>::rm( ){
  if( this->head == 0 ){
    return -1;
  }/*ends if*/

  Node <kind>* delme = cur;
  
  if( delme  == head ){
     
    head = head->getNext();
    delete delme;
    return 0;
  }/*ends if*/ else {
      delme = head;

      while( delme->getNext() != cur ){
	delme = delme->getNext();
      }/*ends while*/

      cur = delme->getNext()->getNext();
      delme = cur->getNext();
      /*delete delme*/
      delete delme;
      return 0;
  }/*ends else*/
  /*returns -1*/
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

/*overloads the << operator*/
template <class kind>
std::ostream& operator<<  (std::ostream& outp, const Set<kind>& obj1)
{
  Node<kind>* counter = obj1.head;
  while(counter) // as long as counter is not null, there is more in the list
    {
      /*outputs rows by 4*/
      for (int col = 0; col < 4 && counter != 0; col++)
	{
	  /*moving current and extracting data from each node*/
	  
	  outp << counter->getData();
	  counter = counter->getNext();
	}/*end first for loop*/
      
      /*jumps to the next row*/
      outp << std::endl;
    } /*end while loop*/
  return outp;
}/*ostream*/
