//stuffs goes heres
//change to set.hxx when I change the file names and whatnot
#include "set.hxx"
#include <iostream>
#include "node.hxx"

#define TYPE int

using namespace std;

int main(){
  
  /*creating an object called obj*/
  Set<TYPE> obj1 = Set<TYPE>();
  Node<TYPE> test = Node<TYPE>();
  int choice = 0;
  while(1){
    /*displays menu*/
    cout << "1. Insert\n";
    cout << "2. Search\n";
    cout << "3. Remove Current Node\n";
    cout << "4. Display List\n";
    cout << "5. Quit" << endl;
    cout << "Selection: ";
  

    /*reads input*/
    while( !(cin >> choice) || cin.peek() != '\n' ){
      cin.clear();
      cin.ignore( 1337, '\n');
      cout << "Please select 1-5: ";
    } 
  
    TYPE dataTemp;
    /*switch case for the menu*/
    switch(choice)
    {
    case 1:
      cout << "Insert your number: ";
      int number;
      cin >> number;
      obj1.add(number);
      break;
      
    case 2: 
      cout << "Search the index: ";
      cin >> number;
      if( obj1.search(number) ){
	cout << "Node found and set to current." << endl;
      } else {
	cout << "Node NOT found. Current node not changed." << endl;
      }
      break;
      
    case 3: 
      dataTemp = obj1.getCur();
      if( obj1.rm() == 0 ){
	cout << "Current Node removed. Value: " <<  dataTemp << endl;
      } else {
	cout << "Set already empty" << endl;
      }
      break;
      
    case 4: 
      /*operation overload*/
      cout << obj1; //no need for endl due to operator<< implementation
      break;
      
    case 5:
      return 0; //need because of swich case break conflict
      
    default:
      cout << "Error: Undefined behavior, please restart the program.";
    }/*end switch case*/ 
    
    
  } //end infinite while loop for input
  
  return 0; //so g++ does not complain about non-returning branches
}
