#include<iostream>
using namespace std;
int getlength(char ch[]){
    int count = 0;
for(int i = 0; ch[i] !='\0' ; i++){
count ++;
}
return count ;
}
char tolower(char ch){
       if( ch >='a' && ch<='z'){
        return ch;
       }
       else{
          char temp = ch -'A' + 'a';
          return temp;
       }
}
bool checkpalindrome( char ch []  ,  int n){
int s = 0;
int e = n-1;
while(s < e){
    if ( tolower((ch[s])) != tolower(ch[e]) ){
   return false;
    }
    else{
        s++ ;
        e--;
    }
}
return true ;
}
int main(){
         char ch[20];
         cout << " enter your name" << endl;
         cin >> ch;
         /*
         // null chahracter putting at index 2
         ch[2] = '\0';
         cout << " your name is " << ch ;s
*/
int length = getlength(ch) ;
cout << "length of string  "<< getlength(ch) << endl; 
 cout << " printing char "<< tolower('g') << endl;
 cout << " printing character "<< tolower('G') << endl;

cout << " checking palindrome " << checkpalindrome( ch ,length ) << endl;

    return 0;
}
