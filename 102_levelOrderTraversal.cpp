/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    vector<vector<int>> travq(TreeNode* root)
    {
        vector<vector<int>> vv;
        vector<int> v;
        queue<TreeNode*> q;
        if (root)
        {
            q.push(root);
            q.push(nullptr);
        }
        TreeNode* tmp = nullptr;
        while (!q.empty())
        {
            tmp = q.front();
            q.pop();
            if (tmp==nullptr)
            {
                vv.push_back(v);
                v.resize(0);
                if (q.size())
                    q.push(nullptr);
            }
            else
            {
                v.push_back(tmp->val);
                if (tmp->left)
                    q.push(tmp->left);
                if (tmp->right)
                    q.push(tmp->right);
            }
        }
        return vv;
    }
    
    void traversal(TreeNode* root,vector<vector<int>>& vv)
    {
        map<int,vector<TreeNode*>> m;
        int l=0;
        if (!root)
            return;
        m[l].push_back(root);
        
        while (m[l].size())
        {
            for (auto tmp : m[l])
            {
                if (tmp->left)
                    m[l+1].push_back(tmp->left);
                if (tmp->right)
                    m[l+1].push_back(tmp->right);
            }
            l++;
        }
        vector<int> v;
        for (auto it=m.begin();it!=m.end();it++)
        {
            if (it->second.size())
            {
                for (auto tmp : it->second)
                    v.push_back(tmp->val);
                vv.push_back(v);
                v.erase(v.begin(),v.end());
            }
        }
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        // vector<vector<int>> vv;
        // traversal(root,vv);
        // return vv;
        return travq(root);
    }
};