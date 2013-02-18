#include <ostream>
#include "set.hpp"
#include "node.hpp"

template <class kind>
Set<kind>::Set(  ){
  head = 0;
  cur = 0;
}

template <class kind>
Set<kind>::~Set(){
  //mostly terrible way to do this, go to close to the last node then delete 
  //otherwise mem usage would double or possible stack overflow with recusive
  
  while( head != 0 ){
    cur = head;
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

  Node<kind>* addMeNode = new Node<kind>( addMe, cur->getNext() );
  cur->setNext( addMeNode );

}


template <class kind>
int Set<kind>::rm( ){
  if( this->head == 0 ){
    return -1;
  }

  Node <kind>* delme = cur;
  
  if( delme  == head ){
     
    head = head->getNext();
    delete delme;
    return 0;
  } else {
      delme = head;

      while( delme->getNext() != cur ){
	delme = delme->getNext();
      }

      cur = delme->getNext()->getNext();
      delme = cur->getNext();
      delete delme;
      return 0;
  }
  return -1;
}


//should throw exception if null, though for this homework it will return 0/NULL
template <class kind>
kind Set<kind>::getCur(){
  if( cur ){
    return cur->getData();
  } else {
    return 0;
  }
}

template <class kind>
void Set<kind>::retToHead(){
  cur = head;
}

template <class kind>
bool Set<kind>::search( kind s ){
  Node<kind>* searchIndex = head;
  while( searchIndex ){
    if( searchIndex->getData() == s ){
      cur = searchIndex;
      return true;
    }
    searchIndex = searchIndex->getNext();
  }
  return false;
}

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
