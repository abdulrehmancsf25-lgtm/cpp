// REVERSE LEVEL ORDER TRAVERSEL
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

void levelOrderTraversel(node* root , vector<int> &ans){
    
    queue<node*> q ;
    q.push(root) ;
    q.push(NULL) ;
     node* temp ;
    while(!q.empty()){
       temp = q.front() ;
       q.pop() ;

       if(temp){
                ans.push_back(temp ->val) ;
                if(temp->left)
                q.push(temp->left) ;
                if(temp->right)
                 q.push(temp->right) ;
       }
       else{
            if(!q.empty())
              q.push(NULL) ;
       }
    }
}

int main(){
            node* root = NULL ;
           root =  builTree(root) ;
           vector<int> ans ;
           levelOrderTraversel(root , ans) ;
           cout << endl; 
           for(auto i : ans)
             cout << i << " " ;

    return 0 ;
}