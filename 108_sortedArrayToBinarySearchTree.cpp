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

TreeNode* sortedAtoBST(vector<int>& nums,int start,int end)
{
    if (end<=start)
        return NULL;
    int middle = (start+end)/2;
    TreeNode* root = new TreeNode(nums[middle]);
    root->left = sortedAtoBST(nums,start,middle);
    root->right = sortedAtoBST(nums,middle+1,end);
    return root;
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
    return sortedAtoBST(nums,0,nums.size());
}


int main()
{
	vector<int> v = {-10,-3,0,5,9};
	TreeNode* root = sortedArrayToBST(v);
}