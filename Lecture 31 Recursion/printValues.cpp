#include<iostream>
using namespace std ;
void printValue(int n ){
    // BASE CASE 
    if (n == 0 )
    return ;
    // TAIL  RECURSION
    cout << n << " " ;
  printValue(n - 1 ) ;
   
}
void printValue2(int n){
  // BASE CASE
  if(n == 0)
  return ;
  // HEAD RECURSION
  printValue2(n - 1 ) ;
  cout << n << " " ;
  return ;
}
int main(){
          int n ;
          cout << "Enter the number to findfactorial : " ;
          cin >> n ;
        printValue(n) ;
        cout << endl ;
        cout << " Second function"<< endl ;
        printValue2(n) ;
    return 0 ;
}