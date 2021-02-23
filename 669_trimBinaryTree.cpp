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

TreeNode* recur(TreeNode* root,int low,int high)
{
    if (root==nullptr)
        return root;
    if (root->val<low)
        return recur(root->right,low,high);
    if (root->val>high)
        return recur(root->left,low,high);
    root->left = recur(root->left,low,high);
    root->right = recur(root->right,low,high);
    return root;
}

TreeNode* trimBST(TreeNode* root, int low, int high) {
    return recur(root,low,high);
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
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(0);
    root->right = new TreeNode(2);
    root = recur(root,1,2);
    printnode(root);
}