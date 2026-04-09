/*
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
*/
#include<iostream>
using namespace std ;
int factorial(int num){
    if(num == 0)
    return 1 ;
    
    return num * factorial(num -1 ) ;
}
int main(){
  int num ;
  cin >> num ;
  cout << factorial(num) ;
    return 0 ;
}
