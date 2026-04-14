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
/*
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
*/

#include<iostream>
using namespace std ;

int printNumber (int num){
  
    // BASE CASE 
    if(num == 1 )
    return 0 ;
    if(num == 2 ) 
    return 1 ;

   return printNumber(num -1) + printNumber(num - 2 ) ; 

}
int main(){
    int nthFibNo ;
    cout << "Enter the nth fibonacci number to print " ;
    cin >> nthFibNo ;
 cout <<   printNumber(nthFibNo ) << endl ;
   
return 0 ;
}
