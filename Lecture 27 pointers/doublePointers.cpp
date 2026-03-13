#include<iostream>
using namespace std ;
int main(){
 /*   bool t = 1 ;
    bool *ptr = &t ;
    *ptr -= 1;
    cout << *ptr ;
*/
int i =  5;
int *ptr = &i ;
int **ptr2 = &ptr ;
/*
                          // PRINTING ADDRESSES
// cout << ptr << endl ;
// cout << *ptr2 << endl ;
 cout << &ptr << endl ;   // Differrnt 
 cout << *ptr2 << endl ;   // IF WE USE * AND & TOGETHER THEY CANCEL OUT EACH OTHER'S EFFECT(*&ptr2 == ptr2)
 //cout << &ptr2 << endl ;
 cout << endl ;
 cout << &ptr << "  " << ptr2 << endl ;
 cout << ptr << " " << *ptr2 << endl ;
           // ACCESSING VALUE AT 
           **ptr2 += 5 ; // UPDATING I 
           *ptr -= 5 ;   // AGAIN UPDATE BACK TO ORIGINAL VALUE
           cout << i << " " << *ptr <<" " <<  **ptr2 << endl ;*/

           cout << &i << "  " << ptr << "  " << *ptr2 <<  endl ;
    return 0 ;
}
