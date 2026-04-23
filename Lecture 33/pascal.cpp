#include<iostream>
using namespace std ;
int factorial(int n ){
    // BASE CASE
    if(n == 0 )
    return 1 ;

  return n * factorial(n-1) ;
}
int main(){
     int n ;
 cin >> n ;
   for(int i = 0 ; i < n ; i++){
  
  for(int j = 0  ;  j < n - i - 1  ; j++){
    cout << " " ;
  }

  for(int k = 0 ; k <= i  ; k++){
   int value = factorial(i)/(factorial(k)* factorial(i-k) ) ;
   cout << value << " " ;
    
  }
  cout << endl ;
   }
    return 0 ;
}
