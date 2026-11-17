#include <iostream>
#include<vector>
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
Node* makeBSTFromInorder(const vector<int> &temp ,int s,int e){
        if(s>e)
        return NULL ;
        int mid = s+(e-s)/2 ;
        Node* root =new Node(temp[mid]);
        root ->left = makeBSTFromInorder(temp,s,mid-1) ;
        root ->right = makeBSTFromInorder(temp ,mid+1 ,e) ;
    return root ;
}
void LNR(Node* root){
    if(!root)
    return ;
    
    LNR(root ->left) ;
    cout << root ->val << " " ;
    LNR(root ->right) ;
}
int main()
{
    Node *root = NULL;
    vector<int> temp{10,20,30,40,50,60} ;
    root = makeBSTFromInorder(temp,0,temp.size()-1);
   LNR(root) ;

    return 0;
}