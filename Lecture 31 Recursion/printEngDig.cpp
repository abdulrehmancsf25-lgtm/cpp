#include<iostream>
using namespace std ;
void printDigits(int num){
       
    string arr[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
        // BASE CASE 
        if(num < 10 ){
         cout << arr[num] << " " ;
         return ;
          }
        // PROCESSING 
     int digit = num % 10 ;
     num = num / 10 ;
       // RECURSIVE CALL 
   printDigits(num) ;
   printDigits(digit)  ;
 }
  
int main(){
    int num ;
    cout << "Enter digits " ;
    cin >> num ;
    printDigits(num ) ;
    return 0 ;
}