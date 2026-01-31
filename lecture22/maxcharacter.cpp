#include<iostream>
#include<string>
#include<array>
using namespace std;
char maxOccCharacter(string s){
         array <int, 226> arr ={0};
         for(int i = 0 ; i < s.size() ;i++){
            char ch = s[i];
            int number = 0;
            number = ch - 'a';
            arr[number]++;
         }
        int maxim = -1 ; 
        int ans = 0;
        for(int i =0 ; i < arr.size() ; i++){
            if(maxim < arr[i]){
             maxim = arr[i];
             ans = i ;
            }
        }
    char temp = ans + 'a';
    return temp;

}




int main(){
      string s ;
cout << " Enter the string "<< endl;
cin >> s ;
cout << maxOccCharacter(s);

    return 0;
}