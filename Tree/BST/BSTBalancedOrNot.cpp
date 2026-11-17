#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node() : val(0), left(nullptr), right(nullptr) {}
    Node(int data)
    {
        this->val = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *buildBST(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if (data < root->val)
        root->left = buildBST(root->left, data);
    else
        root->right = buildBST(root->right, data);

    return root;
}Node *insertDataInBst(Node *root)
{
    while (1)
    {
        int num;
        cout << "Enter data to put in BST : ";
        cin >> num;
        if (num == -1)
            break;
        root = buildBST(root, num);
    }
    return root;
}
pair<int,bool> balORnot(Node* root){
    if(!root){
        return {0,true} ;
    }
    pair<int,bool> lft = balORnot(root ->left) ;
    pair<int,bool> rgt = balORnot(root -> right) ;

    pair<int,bool> temp ;
    temp.first = max(lft.first , rgt.first) +1 ;
    temp.second = (abs(lft.first - rgt.first) <= 1) && lft.second &&  rgt.second ;
        
    return temp;
}
int main()
{
    Node *root = NULL;
    root = insertDataInBst(root);
    cout << endl;

     pair<int,bool> ans = balORnot(root);
    if(ans.second)
       cout << "BST is balanced" << endl;
    else
       cout<< "BST not balanced"<< endl ;
    return 0;
}