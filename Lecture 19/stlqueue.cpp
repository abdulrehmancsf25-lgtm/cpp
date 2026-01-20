#include<iostream>
#include<queue>
using namespace std ;
int main(){
    // Queue --> first in first out like a line or queue
    queue<string> opp ;
    opp.push("Abdul");
    opp.push("Rehman");
    opp.push("Arshad");
    cout << " first element->" << opp.front() << endl ;
    opp.pop();
     cout << " first element after pop ->" << opp.front() << endl ;
    // max heap
     priority_queue<int> maxi ;
     // min heap
     priority_queue<int ,vector<int> , greater<int>> mini;
maxi.push(5);
maxi.push(1);
maxi.push(2);
maxi.push(3);
int m = maxi.size();
for (int i = 0 ;i < m ; i++){
    cout <<  maxi.top() << " " ;
    maxi.pop();
}
cout << endl;
mini.push(10);
mini.push(9);
mini.push(11);
mini.push(8);
int n = mini.size();
for(int i= 0; i < n ; i++){
    cout << mini.top() <<" " ;
    mini.pop();
}
    return 0;
}