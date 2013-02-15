#include <ostream>
#include "set.hxx"
#include "node.hxx"


template <class kind>
Set<kind>::Set(  ){
  head = 0;
  cur = 0;
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

template <class kind>
kind Set<kind>::getCur(){
  return cur->getData();
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
std::ostream& operator <<  (std::ostream& outp, Set<kind>& obj1)
{
  int counter
  while(counter >= 0)
    {
      /*outputs rows by 4*/
      for (int col = 0; col < 4; col++)
	{
	  /*moving current and extracting data from each node*/
	  for (int x = 0; x < counter; x++)
	    {
	      cur = head;
	      std::cout << cur->data;
	      cur = cur->next;
	    }/*end first for loop*/
	}/*end first for loop*/
      
      /*jumps to the next row*/
      std::cout << std::endl;
    } /*end while loop*/
  return outp;
}/*ostream*/
