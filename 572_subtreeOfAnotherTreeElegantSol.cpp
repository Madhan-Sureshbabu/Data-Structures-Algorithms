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

bool isequal(TreeNode* s, TreeNode* t)
{
    if (s==NULL && t==NULL)
        return true;
    if (s==NULL || t==NULL)
        return false;
    return (s->val==t->val) && (isequal(s->left,t->left)) && (isequal(s->right,t->right));
}

bool treeTraversal(TreeNode* s, TreeNode* t)
{
    return (s!=NULL) && (isequal(s,t) || isequal(s->left,t) || isequal(s->right,t));           
}

bool isSubtree(TreeNode* s, TreeNode* t) {
    return treeTraversal(s,t);
}

int main()
{
	TreeNode* s = new TreeNode(1);
	s->left = new TreeNode(1);
    s->left->left = new TreeNode(2);

	TreeNode* t = new TreeNode(1);

	cout<<isSubtree(s,t)<<endl;

}