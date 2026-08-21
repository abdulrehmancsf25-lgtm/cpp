#include <iostream>
#include<queue>
using namespace std;

int main() {
             deque<int> d1 ;
            d1.push_front(1) ;
            d1.push_back(2) ;
            d1.push_front(0) ;
            d1.push_back(3) ;
            
            int size = d1.size() ;
            for(int i = 0 ; i < size ; i++){
                 cout << d1.front() << "  " ;
                 d1.pop_front() ;
            }
            
            d1.push_front(1) ;
            d1.push_back(2) ;
            d1.push_front(0) ;
            d1.push_back(3) ;

            d1.clear() ;
            
            cout << endl ;
            
            if(d1.empty())
            cout << "Doubly ended queue is empty " << endl ;
            else 
            cout << "Doubly ended queue is not empty " << endl ;
    return 0;
}