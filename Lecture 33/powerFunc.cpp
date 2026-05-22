#include<iostream>
using namespace std ;
long long  power_Func(int base , int exponant  ){
    // base case 
    if(exponant == 0)
     return 1 ;
     if(exponant == 1)
     return base ;
// pt=rocessing 
 long long ans = power_Func(base , exponant/2) ;
               if(exponant & 1)
                  return ans * ans * base ;
               else
                   return ans * ans ;   
               
}
int main(){
           int num , power ;
            cin >> num >> power ;
         cout <<    power_Func(num , power  ) ;
return 0 ;
}

