#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q1;
    q1.push(3);
    q1.push(4);
    q1.push(5);

    cout << "Front : " << q1.front() << endl;
    cout << "Back : " << q1.back() << endl;

    cout << "size : " << q1.size() << endl;

    if (q1.empty())
        cout << "Queue is empty " << endl;
    else
        cout << "Queue is not empty " << endl;

    q1.pop();
    cout << "Front after poping : " << q1.front() << endl;
    return 0;
}