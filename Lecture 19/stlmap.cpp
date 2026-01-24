#include<iostream>
#include<map>
using namespace std ;
int main(){
    // time complexity is O(logn) due to Red Black Tree or Balanced tree 
    // In unordered map is O(1)  due to hash table fmapping
    map<int,string> my ;
    my[3] = "Abdul";
    my[2]= "Rehman";
    my[5]="Arshad";
    my[4]="PUCIT";
                              //OR
    my.insert({ 8 ,"ComputerScience"})  ;                      
    // return in sorted order like set opposite to unorderd_map
    for(auto i : my){
        cout << i.first << " ";
    }
    cout << endl;
    for(auto i : my){
        cout << i.second << " ";
    }
    cout << endl;
    cout << " finding the key element 8  "<<my.count(8) ;
    cout << endl;
    auto it = my.find(2);
    //find returns the iterator
    //*i will return the vsalue at iterator 
    for (auto i =it ; i != my.end() ;i++ ){
        cout << (*i).first << " " << (*i).second << endl;
    }
    return 0;
}