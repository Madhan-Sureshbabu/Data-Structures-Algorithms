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

TreeNode* merge(TreeNode* root1, TreeNode* root2) {
    if (root2==nullptr)
    {
        return root1;
    }
    else if (root1==nullptr)
    {
        return root2;
    }
    root1->val += root2->val;
    root1->left = merge(root1->left,root2->left);
    root1->right = merge(root1->right,root2->right);
    return root1;
}
    
TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
    return merge(root1,root2);
}

void printnode(TreeNode* root)
{
	queue<TreeNode*> q;
	q.push(root);
	while (q.empty()==false)
	{
		root = q.front();
		cout<<root->val<<", ";
		q.pop();
		if (root->left!=nullptr)
			q.push(root->left);
		if (root->right!=nullptr)
			q.push(root->right);
	}
}

int main()
{
	TreeNode* root1=new TreeNode(1);
	root1->left = new TreeNode(3);
	root1->left->left = new TreeNode(5);
	root1->right = new TreeNode(2);

	TreeNode* root2=new TreeNode(2);
	root2->left = new TreeNode(1);
	root2->left->right = new TreeNode(4);
	root2->right = new TreeNode(3);
	root2->right->right = new TreeNode(7);

	mergeTrees(root1,root2);

	printnode(root1);
}