#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    for (int i = 0; i < 10; i++)
    {
        s.push(i + 1);
    }
    cout << "Top element is : " << s.top() << endl;
    cout << " Empty or not " << s.empty() << endl;
    s.pop();
    cout << "Now top element is : " << s.top() << endl;
    cout << "Current size is : " << s.size() << endl ;
     return 0;
}