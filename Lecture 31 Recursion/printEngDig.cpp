#include<iostream>
using namespace std ;
void printDigits(int num){
       
    string arr[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
        // BASE CASE 
    for(int i = 0 ; i < 10 ; i++){
        if(num == i){
            cout << arr[i] << " " ;
            return ;
        }
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