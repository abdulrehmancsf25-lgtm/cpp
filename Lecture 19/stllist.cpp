#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> li ;
    li.push_back(3);
    li.push_front(12);
    /*
    // "below will not work because there is no random access in list not contiguous memeory locations 
   // you would need to traverse to reach a particular memory block "
    for (int i= 0; i < li.size() ; i++){
        cout << li[i];
    }*/
    for(int i : li){
        cout << i << " " ;
    }
// time complexity will O(1) for begin , end ,front ,back ,empty
        //but erase will O(n) because it will remove element by traversing 
       // li.erase(li.begin(),li.begin() + 1) ;
       //This is a common point of confusion when transitioning from std::vector to std::list. 
       // Here is why it happens and how to fix it:
       //std::vector has Random Access Iterators.
       //  Since a vector is one continuous block of memory, the compiler can "jump" to any position instantly using math (e.g., begin() + 10).

//std::list has Bidirectional Iterators. 
// Because it is a linked list, elements are scattered in memory. 
// To get to the next element, the computer must physically follow a pointer from the current node.
//  It cannot "calculate" the position of the next node without visiting the ones before it.

//To prevent you from writing inefficient code by mistake, the C++ standard does not allow the + or - operators on list iterators.
       li.erase(li.begin(), next(li.begin(), 1));
         for(int i : li){
        cout << i << " " ;
    }
    list <int> no(li);
      for(int i : no){
        cout << i << " " ;
    }
list <int> on(5,100);
for(int i : on){
    cout<< i<< " ";
}
    return 0;
}