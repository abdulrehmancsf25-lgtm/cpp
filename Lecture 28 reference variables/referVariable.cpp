#include<iostream>
using namespace std ;
// PASS BY VALUE (a copy is created and is accessible only in that (update) function)
// BUT FOR PASS BY  REFERNCE  NO COPY IS CREATED(pointing to real variable)

 /*int& update2(int n){
    int x = n ;
    x++ ;
    int& i = x ;
    return x ;
    // BAD PRACTICE OF RETURNING REFERENCE VAR. because int x or i are local variables
    // (not accessible outside)
}*/
void update1(int& n ){
    n++ ;
}
int main(){
    /*
  int  i = 5 ;
           //     CREATING REFERENCE VARIABLE
  int& j = i ;
  j++ ;
  cout << i << endl ;
  */
 int n = 8 ;
 cout << "Before value " <<  n << endl ;
  update1(n) ;
  cout << "After value " << n << endl ;
    return 0 ;
}