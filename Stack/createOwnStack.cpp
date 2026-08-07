#include <iostream>
using namespace std;
class Stack
{
    // attributes
public:
    int *arr;
    int size;
    int top;
    // constructor
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    // methods
    void push(int num)
    {
        if (size == 0 || size - top <= 1)
            cout << "Stack overflow  " << endl;
        else
        {
            top++;
            arr[top] = num;
        }
    }

    bool empty()
    {
        if (top < 0)
            return true;
        else
            return false;
    }

    int peek()
    {
        if (!empty())
            return arr[top];
        else{
            cout << "Stack underflow  " << endl;
            return -1 ;
        }
    }
    void pop()
    {
        if (top >= 0)
            top--;
        else
            cout << "Stack underflow" << endl;
    }
};
int main()
{
    Stack s1(5);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    s1.push(6) ; // overflow 
    cout << s1.peek() << endl ;
    if(s1.empty())
       cout << "STACK IS EMPTY " << endl ;
    else cout << "Stack not empty " << endl ;

    s1.pop() ;
    cout << s1.peek() << endl ;
     s1.pop() ;
     cout << s1.peek() << endl ;
     s1.pop() ;
     cout << s1.peek() << endl ;
     s1.pop() ;
     cout << s1.peek() << endl ;
    s1.pop() ;
    cout << s1.peek() << endl ;


    return 0;
}