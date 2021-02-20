#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* invertTreeIterative(TreeNode* root)
{
	stack<TreeNode*> s;
	s.push(root);
	if (root)
	{
		while (!s.empty())
		{
			TreeNode* p = s.top();
			s.pop();
			if (p)
			{
				s.push(p->left);
				s.push(p->right);
				swap(p->left,p->right);
			}
		}
	}
	return root;
}

int main()
{
	TreeNode* root = new TreeNode(5);
	root->left = new TreeNode(4);
	root->right = new TreeNode(6);
	root = invertTreeIterative(root);
	cout << root->val << " " << root->left->val << " " << root->right->val;
}