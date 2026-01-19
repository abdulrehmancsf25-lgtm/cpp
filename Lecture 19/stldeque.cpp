#include<iostream>
#include<deque>
using namespace std ;
int main(){
    deque<int> d ;
    
    d.push_back(9);
    d.push_front(10);
    for(int i = 0 ; i< d.size() ; i++){
        cout<<d.at(i)<< " ";
    }
    cout<<endl;
    d.pop_front();
    for(int i = 0 ; i< d.size() ; i++){
        cout<<d.at(i)<< " "<<endl;
    }
    d.insert(d.begin() ,{3,2,5});
    cout << endl;
    for(int i = 0 ; i< d.size() ; i++){
        cout<<d.at(i)<< " ";
    }
    cout << d.max_size() << "is max size" << endl;
    cout<< "front element "<<d.front() <<endl;
    cout << " before deleting elements "<<d.size();
    //deleting one element from deque ;
    d.erase(d.begin() ,d.begin( ) + 1 );
 cout << " after deleting elements "<<d.size();
  cout << d.max_size() << "is max size" << endl;
    return 0 ;
}
