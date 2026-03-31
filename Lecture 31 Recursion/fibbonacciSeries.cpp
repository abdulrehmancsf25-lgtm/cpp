#include<iostream>
using namespace std ;
int  counting ;
void print(int& previous , int& next , int start){
    if(start == counting)
    return ;

    int ans =  previous + next ;
    cout << ans << " " ;
    previous = next ;
    next = ans ;
    start ++ ;
   print(previous , next , start) ;
}


int main(){
    int num1 , num2 ;
    cin >> num1 >> num2 ;
    cout << " upto : " ;
    cin >> counting ;
    cout << num1 << " " << num2 << " " ;
     print(num1 , num2 , 0) ;
return 0 ;
}
