#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s ;
    // time complexity for most functions of set is O(logn) ->Binary search
    s.insert(4);
  s.insert(2); 
   s.insert(4);
     s.insert(4); 
      s.insert(5); 
       s.insert(0); 
        s.insert(0); 
         s.insert(1);
         // auto instead of int is good for compiler to identify  itself
         for(auto i : s){
            cout << i << " ";
         }
         cout << endl;
         // below is method for iterator that we used in erase function for deletion of element at iterator named it 
         auto it =s.begin();
         it++;
         it++;
         s.erase(it );
         for (auto i : s){
            cout << i << " " ;
         }
         cout << endl;
         cout << " 5 is present or not ->"<< s.count(5);
         cout << " -1 is present or not->" << s.count(-1) ;
cout << endl;
         auto opp = s.find(5);
// Always check if the value was actually found before printing
if (opp != s.end()) {
    cout << "Found: " << *opp<< endl;
} else {
    cout << "Value not in set." << endl;
}
    return 0;
}