#include<iostream>
using namespace std ;
int find_Sqrroot(int target ,int s , int e , int ans  ){
      int  mid = s + (e-s)/2 ;
    long long sqroot = mid * mid ;
    if(s > e ){
         return ans ;
    }
    if( sqroot == target)
    return mid ;
    
    if(sqroot > target)
   return  find_Sqrroot(target , s , mid - 1 , ans  ) ;
    else{
             ans = mid ;
        return       find_Sqrroot(target ,   mid + 1 , e , ans  ) ;
    }
}
double precise_Sqroot(int num , double temp_ans , int precision ){
     double digit = 1 / 10.0 ; // 1/10 leads to int division 
       int i = 1 ;
            while(i <= precision){
               
                if(temp_ans * temp_ans == num)
                  break ;
                else if(( (temp_ans + digit) * ( temp_ans + digit) ) < num )
                      temp_ans += digit ;
                else{
                       digit /= 10 ;
                       i++ ;
                    }
            }
    return temp_ans ;
}
/*
int find_Sqrroot(int target){
      int s = 0 , e = target /2 , mid = s + (e-s) / 2 , ans ;
      while(s <= e){
    long long sqroot = mid * mid ;
    if(sqroot == target){
         ans = mid ;
        break ;
    }
    else if(sqroot > target)
    e = mid -1 ;
    else{
             s = mid + 1 ;
             ans = mid ;
    }
    mid = s + (e-s) /2 ;
      }
      return ans ;
}
*/
int main(){
    int num , ans ;
    cout << "Enter the number to find out its square root " ;
    cin >> num ;
     double temp_ans  =  find_Sqrroot(num , 0 , num/2 ,  ans ) ;
     int precision ;
     cout << "Enter precision upto " ;
     cin >> precision ;
       
     double final_Ans = precise_Sqroot(num , temp_ans , precision) ;
     cout << final_Ans ;
    return 0 ;
}