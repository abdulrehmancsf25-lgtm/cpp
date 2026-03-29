#include<iostream>
using namespace std ;
int power(int n , int m ){
    // BASE CASE 
   if( m == 0)
   return 1 ;
//   int value = n * power( n , m - 1) ;
  // return value ;
               // OR 
               return n * power(n , m-1) ;
}
int main(){
          int num , value ;
          cout << "Enter the number : " ;
          cin >> num ;
          cout << "Enter the power to find : " ;
          cin >> value ;
        cout <<   power(num , value) ;
    return 0 ;
}