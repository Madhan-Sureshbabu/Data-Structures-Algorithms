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

TreeNode* invertTree(TreeNode* root) {
    if (root!=NULL)
    {
        invertTree(root->left);
        invertTree(root->right);
        
        swap(root->left,root->right);
    }
        return root;
}

int main()
{
	TreeNode* root = new TreeNode(5);
	root->left = new TreeNode(4);
	root->right = new TreeNode(6);
	root = invertTree(root);
	cout << root->val << " " << root->left->val << " " << root->right->val;
}