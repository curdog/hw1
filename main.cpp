//stuffs goes heres
//change to set.hxx when I change the file names and whatnot
#include "set.hxx"
#include <iostream>

int main(){
  
  /*creating an object called obj*/
  Set<int> obj1;
  
  /*displays menu*/
  cout << "1. Insert\n";
  cout << "2. Search\n";
  cout << "3. Remove Current Node";
  cout << "4. Display List";
  cout << "5. Quit";
  cout << "Selection: ";
  
  /*reads input*/
  cin >> choice;
  
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
      obj1.search(number);
      break;
      
    case 3: 
      cout << "Insert number to be removed: ";
      obj1.rm(number);
      break;
      
    case 4: 
      /*operation overload*/
      obj1.display();
      break;
    
    case 5:
      return 0;
      
    default:
      cout << "Error: Please enter 1,2,3,4 or 5";
  }/*end switch case*/ 
  
  return 0;
}
