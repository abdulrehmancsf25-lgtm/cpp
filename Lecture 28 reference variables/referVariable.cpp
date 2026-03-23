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
// 2 -->  
           // RETURN A COPY (PASS BY VALUE)
        int getElement1(int arr[] , int i){
                 return arr[i] ;
        }
         
     int& getElement2(int arr[] , int index){
        return arr[index] ;
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

     // REFERENCES AS RETURN VARIABLES

     int arr[5] = {0,1,2,3,4} ;
    // CALLING GETELEMENT1 FUNCTION (PASS BY VALUE)
    //  getElement1(arr , 2) = 3 ;  (Not possible to set value)
    int x = getElement1(arr , 2) ;
    cout << "Printing x : " << x << endl ;

    // CALLING GETELEMENT1 FUNCTION (PASS BY REFERENCE)
   getElement2(arr , 2) = 100 ;
   cout << "PRINTING NEW SET VALUE  :  "  << getElement2(arr , 2) << endl ;
   cout <<"Printing again :  "<<  arr[2] << endl ;
    return 0 ;
}