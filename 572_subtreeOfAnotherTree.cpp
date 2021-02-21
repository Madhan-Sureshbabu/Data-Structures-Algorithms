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

bool treeTraversal(TreeNode* s, TreeNode* t)
{
    bool c1,c2;
    if (s!=NULL && t!=NULL)
    {
        if (s->val != t->val)
        {
        	// cout<<s->val<<" not equal to "<<t->val<<endl;
            return false;
        }
        else
        {
        	// cout<<s->val<<" equal to "<<t->val<<endl;
            c1 = treeTraversal(s->left,t->left);
            c2 = treeTraversal(s->right,t->right);
            return c1 && c2;
        }
    }
    else if (s==NULL ^ t==NULL)
    	return false;
    return true;
}
bool isSubtree(TreeNode* s, TreeNode* t) {
    bool c1,c2;
    if (s)
    {
        if (s->val == t->val)
        {
            bool sub = treeTraversal(s,t);
        	// cout<<s->val<<" equal to "<<t->val<<" & sub = "<<sub<<endl;
            if (sub==true)
                return true;
        }
    	c1 = isSubtree(s->left,t);
        c2 = isSubtree(s->right,t);          
        return c1 || c2;
    }
    return false;
}

int main()
{
	TreeNode* s = new TreeNode(1);
	s->left = new TreeNode(1);

	TreeNode* t = new TreeNode(1);

	cout<<isSubtree(s,t)<<endl;

}