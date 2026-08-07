#include <iostream>
using namespace std;
class Node
{
public:
    Node *next;
    Node *prev;
    int val;
    Node(int val)
    {
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};
class Stack  // Stack using doubl linked list 
{
public:

    Node *tail = NULL;

    void push(int data)
    {
        Node *newNode = new Node(data);
        if (tail == NULL)
        {
            tail = newNode;
        }
        else
        {
            tail -> next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void pop()
    {
        if (tail)
        {
            Node *previous = tail -> prev;
            delete tail;
            tail = previous;
            if(tail)
              tail -> next = NULL ;

        }
        else
            cout << "Stack underflow " << endl;
    }
    int peek()
    {
        if (tail)
            return tail->val;
        else
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
    }
    bool isEmpty()
    {
        if (tail)
            return false ;
        else
            return true ;
    }
};
int main()
{
    Stack s1;
    s1.push(1);
    cout << s1.peek() << endl;
    if (s1.isEmpty())
        cout << "Stack is  empty" << endl;
    else
        cout << "Stack is not empty " << endl;
    s1.pop();

    // cout << s1.peek();
    s1.push(1) ;
    s1.push(2) ;
    s1.push(3) ;
    cout << s1.peek() << endl ;
    s1.pop() ;
      cout << s1.peek() << endl ;
    return 0;
}