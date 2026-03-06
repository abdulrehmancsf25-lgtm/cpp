#include<iostream>
using  namespace std ;
int main(){
     int arr[10] = {3,7,5,6,4,2,7,0} ;
     /*
     cout << "Address of first memory  block " << arr << endl ;
    cout << "Address of first memory block " << &arr[0] << endl ;
    cout <<" first element of array is "<<  arr[0] << endl ;
   cout <<"Value at 0th index is " <<  *arr << endl ;
   cout << "Adding 1 to firstr element = " << *arr + 1 << endl ;
   cout << "next elemnt to 0th index is " << *(arr+1) << endl ;
   cout << arr[2] << endl ;
  //                                       VERY IMPORTANT
  //                     arr[i] = *(arr + i)  OR       i[arr] = *(i +  arr)
   cout << 2[arr] << endl ;
   // ACTUAL WORKING IN BELOW LINE
   cout << *(arr + 3 ) << endl ;
   cout << *(3 + arr) << endl ;
    cout << "Address of first memory block " << &arr[2] << endl ;
*//*
    int *ptr = arr ;
    //                  OR
    int *ptr1 = &0[arr] ;
    cout << *ptr1 << endl ;
 //   (*ptr) ++ ;
   // cout << *arr << endl ;
   //              SIZE OF ARR WILL BE 40 ( 10 * 4BYTES FOR INT)  & SIZE OF POINTER WILL BE 8 BYTES
   cout << "Size of pointer is " << sizeof(ptr1) << endl ;
   cout << "Size of array is " << sizeof(arr) << endl;
   cout << "Size of one memory block is " << sizeof(*ptr1) << endl ;
   int *p3 = (arr + 1) ;
   cout << *p3 << endl ;
   int temp[5] = {5,8,9,3,2} ;
   cout << "1st " << sizeof(temp) << endl; 
   cout << "2nd " << sizeof(*temp) << endl ;
   cout << "3rd " << sizeof(&temp) << endl ;
   */
  int op[20] = {4,9,8,7,2,5} ;
  cout << &op << endl ;
  cout << op << endl ;      // ALL THREE ARE SAME 
  cout << "-> " << &op[0] << endl ;

     int *pt3 = op ;
      cout << *pt3 << endl ;
     cout << pt3 << endl;       // Both are different one is element address one is pointer address
    cout <<"->" << &pt3 << endl ;
    //  DIFFERENCE BETWEEEN ARRAY AND POINTER
    // 1ST -->  SIZE 
    // 2ND -->  (op & &op)  && (pt3 & &pt3)
    // 3RD -->  ADDRESS CAN'T BE CHANGED IN ARRAY BUT CAN BE CHANGED IN POINTER (aar += 1 WRONG)(pt3 += 1 CORRECT)
    cout << "ADRESS BEFORE  " << pt3 << endl ;
      pt3 += 1 ;
      cout << "ADDRESS AFTER  " << pt3 << endl ;
    return 0 ;
    
}