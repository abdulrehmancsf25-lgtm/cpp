#include <iostream>
using namespace std;

int main() {

// POINTERS & REFERENCES IN CPP
int x = 5 ;
int y = 6 ;
 int &temp = x ; // REFERENCE VARIABLE TO X BOTH POINT TO SAME  MEMORY
cout << " x is : " << x << " temp is : "<< temp  << endl ;
  temp += 5 ;
  cout << " now " << " x is : " << x << " temp is : "<< temp  << endl ;
  // now assigning temp = y changes x value and also of temp 
temp = y ;
cout << " after temp =  y " << endl ;
cout << " x is : " << x << " temp is : "<< temp  << endl ;
cout << endl ;

// POINTERS STORE ADDRESSES
int s = 4 ,t = 6 ;
int *ptr = &s ;
cout << "ptr points to s : " << *ptr << endl ;
ptr = &t ;
cout << " after ptr = &t : *ptr is : " << *ptr << endl ;

    return 0;
}