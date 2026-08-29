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

void levelOrderTraversel(node *root)
{ //  breadthFirstSearch
	queue<node *> q;
	if (!root)
		return;
	q.push(root);
	q.push(NULL);

	while (!q.empty())
	{
		node *temp = q.front();
		q.pop();
		if (temp)
		{

			cout << temp->val << " ";
			if (temp->left)
				q.push(temp->left);
			if (temp->right)
				q.push(temp->right);
		}
		else
		{ // 1 level completed
			cout << endl;
			if (!q.empty()) // childs of a level are added
				q.push(NULL);
		}
	}
}
int main()
{
	node *root = NULL;
	// 1 2 3 -1 -1 4 -1 -1 5 -1 6 -1 -1
	root = builTree(root);
	levelOrderTraversel(root);
	return 0;
}