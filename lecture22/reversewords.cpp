#include<iostream>
#include<array>
#include<algorithm>
using namespace std;


vector<char>  solve(vector<char> s){
   int start = 0 ;
   for(int end = 0; end < s.size() ; end++){
    if(s[end] == '_' ){
        int e = end -1;
        while(start < e){
            swap(s[start++], s[e--]);
        }
          start = end + 1;
    }
  
   }
   // Reverse last segment
    int e = s.size() - 1;
    while(start < e) {
        swap(s[start++], s[e--]);
    }

return s;
}


int main(){
  vector<char> s({'a','b','c','_','d','e','f','_','g','h','i','j'});
  vector<char > str({'c','a','t','_','i','s','_','a','n','_','a','n','i','m','a','l'});
   vector<char> result = solve(s);
for(char c : result){ cout << c;}
cout << endl;
     vector<char> result1 = solve(str);
     for(auto i : result1){
        cout << i ;
     }
    return 0;
}