#include<bits/stdc++.h>
using namespace std;

void traversal(TreeNode* root,vector<int>& v)
{
    if (root==nullptr)
        return;
    if (root->left==nullptr)
    {
        v.push_back(root->val);
        traversal(root->right,v);
    }
    else
    {
        traversal(root->left,v);
        v.push_back(root->val);
        traversal(root->right,v);
    }
}

void itertraversal(TreeNode* root, vector<int>& v)
{
    // stack<TreeNode*> stk;
    // if (root==nullptr)
    //     return;
    // stk.push(root);
    // while (!stk.empty())
    // {
    //     TreeNode* tmp = stk.top();
    //     if (tmp->left!=nullptr)
    //     {
    //         stk.push(tmp->left);
    //         tmp->left=nullptr;
    //     }
    //     else
    //     {
    //         stk.pop();
    //         v.push_back(tmp->val);
    //         if (tmp->right!=nullptr)
    //         {
    //             stk.push(tmp->right);
    //             tmp->right = nullptr;
    //         }
    //     }
    // }
    stack<TreeNode*> stk;
    while (root || !stk.empty())
    {
        while (root)
        {
            stk.push(root);
            root=root->left;
        }
        root=stk.top();
        stk.pop();
        v.push_back(root->val);
        root=root->right;
    }
    
}

vector<int> inorderTraversal(TreeNode* root) {
    vector<int> v;
    // traversal(root,v);
    itertraversal(root,v);
    return v;
}