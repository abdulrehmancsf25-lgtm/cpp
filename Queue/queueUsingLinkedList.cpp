#include <iostream>
using namespace std;
class Node
{
public:
    Node *next;
    int val;

    Node() : val(0), next(NULL)
    {
    }
    Node(int val) : val(val), next(NULL)
    {
    }
};
class My_Queue
{
public:
    Node *head;
    Node *curr;
    My_Queue() // Constructor
    {
        head = NULL;
        curr = NULL;
    }
    ~My_Queue() // Destructor
    {
        while (head)
        {
            Node *tmp = head;
            head = head->next;
            delete tmp;
        }
    }
    // push method
    void push(int data)
    {
        if (head == NULL)
        {
            head = new Node(data);
            curr = head;
        }
        else
        {
            Node *Node_to_insert = new Node(data);
            curr->next = Node_to_insert;
            curr = curr->next;
        }
    }

    // pop method
    void pop()
    {
        if (head == NULL)
            return;

        else
        {
            Node *Node_to_del = head;
            head = head->next;
            delete Node_to_del;
            if (head == NULL)
                curr = NULL;
        }
    }

    // front
    int front()
    {
        if (head == NULL)
            return -1;
        else
            return head->val;
    }

    // back
    int back()
    {
        if (curr == NULL)
            return -1;
        else
            return curr->val;
    }
    // is_empty()
    bool is_empty() const
    {
        return head == NULL;
    }
    // size ()
    int size()
    {
        if (head == NULL)
            return 0;
        Node *trav = head;
        int cnt = 0;
        while (trav)
        {
            cnt++;
            trav = trav->next;
        }
        return cnt;
    }
};
int main()
{
    My_Queue q1;
    cout << q1.size() << endl;
    cout << q1.front() << endl;
    cout << q1.back() << endl;

    q1.push(0);
    q1.push(1);
    q1.push(2);

    cout << "Front : " << q1.front() << endl;
    cout << "Back : " << q1.back() << endl;
    cout << "Size " << q1.size() << endl;

    q1.pop();
    cout << "After poping " << endl;
    cout << "Front : " << q1.front() << endl;

    q1.pop();
    cout << "After poping " << endl;
    cout << "Front : " << q1.front() << endl;

    q1.pop();
    cout << "After poping " << endl;
    cout << "Front : " << q1.front() << endl;

    return 0;
}