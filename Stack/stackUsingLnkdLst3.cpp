#include <iostream>
using namespace std;
class Node
{
public:
    Node *next;
    int val;
    Node(int val)
    {
        this->val = val;
        next = NULL;
    }
};
class Stack // Stack using singly  linked list O(1) time complexity
{
public:
    Node *head = NULL;

    void push(int data)
    {
        Node *newNode = new Node(data);

        newNode->next = head;
        head = newNode;
    }

    void pop()
    {
        if (!head)
            cout << "Stack underflow " << endl;
        else
        {
            Node *temp = head->next;
            delete head;
            head = temp;
        }
    }
    int peek()
    {
        if (head)
            return head->val;
        else
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
    }
    bool isEmpty()
    {
        if (head)
            return false;
        else
            return true;
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
    s1.push(1);
    s1.push(2);
    s1.push(3);
    cout << s1.peek() << endl;
    s1.pop();
    cout << s1.peek() << endl;

    return 0;
}