#include<iostream>
using namespace std ;
int digitSum(int n ){
    // BASE CASE
if(n < 10 )
return n ;
/*
int ans = 0 ;
ans +=  n % 10 ;
return ans + digitSum(n / 10 ) ;
*/
      // SAME
      // RECURSIVE STEP
    // Add the last digit to the sum of the remaining digits
    int ans = (n % 10) + digitSum(n / 10);
    return ans ;
}
int main(){
          int num ;
          cout << "Enter the number : " ;
          cin >> num ;
         cout << "Sum of digits is : " << digitSum(num) ;

    return 0 ;
}