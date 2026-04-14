   // A PERSON HAS TO REACH NTH STAIR . HE CAN JUMP EITHER 2 OR 2 STEPS ATR A TIME 
   // TELL NUMBER OF WAYS TO REACH NTH STAIR STARTING  FROM 0TH STAIR
#include<iostream>
using namespace std ;
 
int numberOfWaysToReachStair(int n ) {

     // BASE CASE 
     if(n < 0 )
     return 0 ;
     if(n == 0 )
     return 1 ;

    // REECURSIVE RELATION 
    int ans = numberOfWaysToReachStair(n -1 ) + numberOfWaysToReachStair(n - 2) ;
   
    return ans ;
}

int main(){
    int n ;
    cout << "Enter the stair number " ;
    cin >> n ;
  cout <<   numberOfWaysToReachStair(n ) ;
    return 0 ;
}