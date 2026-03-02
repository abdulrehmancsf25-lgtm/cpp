#include<iostream>
using namespace std ;
int main(){
    /*
    int a = 5 ;
    // For address &_ sign is used 
    cout << &a << endl ;
    // <- pointer declaration->
    int *ptr = &a ;
    *ptr *= 5 ;
    // cout << a ;  OR 
    cout << "Value at address in ptr " << *ptr << endl ;
    // Below Line ptr without * sign will print only address which is stored in ptr named block
    // It will do operation only with address not value 
 //   cout << ptr  << endl ;
  // cout << ptr + 5 << endl ; 
  //  above will print address with some changing Danger 
  cout << "Address stored in ptr block is  " << ptr << endl ;
  char ch = 'A' ;
  char *ptr2 = &ch ;
 // *ptr2 +=5 ;
  cout << "Value at address stored in ptr2 is " << *ptr2 << endl ;
  cout << "ptr2 multipying with 1 " << *ptr2 * 1 << endl ;
  // size of ptr means size of value at that address which is char 
  cout << "size of value in  ptr block " << sizeof(*ptr2) << endl; 
  // size of actual pointer ptr2
  cout << "size of actual pointer is " << sizeof(ptr2)  << endl;
  */
 /*
int num = 21;
int *ptr = 0;
// in this case cout << ptr which is NULL pointer is an illegal statement to crash programme 
// to fix it we will remove cout  statement because it is accessing value at address 0 which doesn't exist
// cout << *ptr << endl ;
ptr = &num;        
cout << *ptr << endl; 
  *ptr = 19 ;
  cout << *ptr << endl ;
  int a = 12 ;
  int *p2 = 0;
  p2 = &a ;
  cout << "p2  address " << p2 << endl ;
  cout << "*p2  value " << *p2 << endl; 
  int *q = &a ;
  cout << *q << endl ;
  */
 //int num = 5 ;
 //int a = num ;
 //a++;
 //cout << a++ << endl ;
 //cout << a << endl; 
 //cout << num ;
        int alpha = 5 ;
        int *p = &alpha ;
     //   *p += 5 ;
      //  *p ++ ;                 VERY IMP *p++ will wrong due to operator preceence it will *(p++)
      // CORRECT BELOW
      (*p)++ ;
        cout << alpha << endl ;
//              <-- TO COPY ONE POINTER INTO ANOTHER -->
     int *q = p ;
     cout << *q << endl ;
    return 0 ;
}