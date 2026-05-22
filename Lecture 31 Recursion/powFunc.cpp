#include<iostream>
using namespace std ;
 double powFunc(double num , int n ){
    if(n == 0 )
    return 1.0 ;
  double ans ;
   if(n & 1)
   ans = num * (powFunc(num ,  n/2) * powFunc(num ,  n/2)) ;
   else
   ans =  powFunc(num ,  n/2) * powFunc(num ,  n/2) ;
   return ans ;
 }
int main(){

         int num ;
         double  power ;
         cin >> num >> power ;
        
        cout << powFunc( num , power) ;

    return 0 ;
}