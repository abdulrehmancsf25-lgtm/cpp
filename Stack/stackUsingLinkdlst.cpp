#include <iostream>
#include <climits>
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
class Stack // Stack using fixed size singly linked list 
{
public:
    Node *curr = new Node(INT_MAX);
    Node *head = curr;
    Stack(int size)
    {
        for (int i = 0; i < size; i++)
        {
            Node *temp = new Node(INT_MIN);
            curr->next = temp;
            curr = temp;
        }
        Node *new_head = head->next;
        delete head;
        head = new_head;
    }
    void push(int data)
    {
        if (!head)
        {
            cout << "Stack overflow";
            return;
        }
        Node *traverse = head;
        while (traverse)
        {
            if (traverse->val == INT_MIN)
            {
                traverse->val = data;
                break;
            }
            else
            {
                traverse = traverse->next;
            }
        }
        if (traverse == NULL)
            cout << "Stack overflow" << endl;
    }
    void pop()
    {
        // If the very first element is already empty, it's underflow
        if (head == NULL || head->val == INT_MIN)
        {
            cout << "Stack underflow" << endl;
            return;
        }

        Node *traverse = head;
        Node *prev = NULL;

        // Traverse until we find the last non-INT_MIN node
        while (traverse != NULL && traverse->val != INT_MIN)
        {
            prev = traverse;
            traverse = traverse->next;
        }

        // 'prev' is now pointing to the top element of the stack
        if (prev != NULL)
        {
            prev->val = INT_MIN;
        }
    }

    int peek()
    {
        if (head == NULL || head->val == INT_MIN)
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
        else
        {
            Node *trav = head->next;
            Node *prev = head;
            while (trav)
            {
                if (trav->val != INT_MIN)
                {
                    prev = trav;
                    trav = trav->next;
                }
                else
                    break;
            }
            return prev->val;
        }
    }
    bool isempty()
    {
        if (!head || head->val == INT_MIN)
            return true;
        else
            return false;
    }
};
int main(){
               Stack s1(3) ;
               s1.push(1) ;
               s1.push(2) ;
               s1.push(3) ;

              cout <<  s1.isempty() << endl ;
              cout << s1.peek() << endl ;
              s1.push(4) ;
              s1.pop() ;
              s1.pop() ;
              cout << s1.peek() ;
            
    return 0;
}