#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
	node *left;
	node *right;
	int val;

	node(int x) : val(x), left(NULL), right(NULL)
	{
	}
};
node *builTree(node *root)
{
	int n;
	cout << "Enter the value " << endl;
	cin >> n;

	if (n == -1)
	{ // BASE CASE
		return NULL;
	}
	root = new node(n);
	cout << "For left node of " << root->val << endl;
	root->left = builTree(root->left);

	cout << "For right node of " << root->val << endl;
	root->right = builTree(root->right);

	return root;
}

void LNR(node* root){  // INORDER TRAVERSEL
        if(root == NULL)
         return ;
        
        LNR(root->left) ;
        cout << root -> val << " " ;
        LNR(root -> right) ;
}

void NLR(node* root){ // PREORDER TRAVERSEL 
	if(!root)
	  return  ;
	
	cout << root -> val << " " ;
	NLR(root->left) ;
	NLR(root->right) ;
}

void LRN(node* root){ // POSTORDER TRAVERSEL
	 if(!root)
	  return ;
	LRN(root->left) ;
	LRN(root->right) ;
	cout << root -> val << " " ;
}
int main()
{
	node *root = NULL;
	// 1 3 5 -1 -1 7 -1 -1 11 -1 -1 
	root = builTree(root);

	cout << " INORDER TRAVERSEL " ;
	LNR(root) ;
	cout << endl ;

	cout << "PREORDER TRAVERSEL  " ;
	NLR(root) ;
	cout << endl ;

	cout << "POSTORDER TRAVERSEL " ;
	LRN(root) ;
	cout << endl; 
	return 0;
}