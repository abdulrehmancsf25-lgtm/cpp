#include<iostream>
using namespace std ;
int main(){
         //    WILD  POINTER (it is bad practice to initialize pointers )
        int *ptr;
        // it will store any random memory address
        cout <<"Adrress of random memory -> wild pointer " << ptr << endl ;
           
               //        NULL pointer 
               int *p1 = NULL ;
               // Dereferencing NULL pointer gives segmentation fault (Program crashes)
               // As it points to a memory which doesn't exist
               cout << "Address of null pointer " << p1 << endl ;
               int *p3 = 0 ;
          //     cout << *p3 <<  endl ;
           //  cout << *p3 << endl;
             cout << p3 << endl ;
int *pt1 = NULL;
if(pt1)
    cout << "Valid" << endl ;
else
    cout << "Invalid" << endl ; // Prints Invalide because cout << pt1 --> 0 ;

                // VOID POINTER 
                int x = 42 ;
                void *p4 = &x ;
            // We cann't access it directly as compiler doesn't know how many byte to read
              //  cout << *ptr << endl;
              cout << "Accessing void pointer "<< *(static_cast<int*>(p4)) << endl ;

                          // Char type pointer imp concept (While Printing Address)
              char ch = 'A' ;
              void *sp = &ch ;
              cout <<" Accessing address of void (char) pointer " <<  (static_cast<char*>(sp)) << endl ;
        /*       When you print a char*, cout does NOT print the address.
               It treats it as a C-style string.
                It finds A then * and then '\0' to stop
                                                            */

                     // DOUBLE POINTER (Assigning one pointer address to another pointer)    
              int alpha = 5 ;
              int *p0 = &alpha ;
              int **p9 = &p0 ;
              cout << "value of *p0 is " << *p0 << endl ;
              cout << "value of double pointer p9 is " << **p9 << endl ;                          
    return 0 ;
}