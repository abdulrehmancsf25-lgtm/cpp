#include<iostream>
#include<stack>
using namespace std;
int main(){
    // stack -> first in last out OR last in first out 
    stack <string> my ;
    my.push("Arshad");
    my.push("Rehman");
    my.push("Abdul");
    cout << " top element of my stack is " << my.top() <<endl ;
    //removing element on top of stack
    my.pop();
    cout << " top element of my stack is now " << my.top()<< endl;
    //size 
    cout << " size " << my.size() ;
    return 0;
}