class Solution {
public:
    
    void insert(priority_queue<int,vector<int>,greater<int>> &pq,int e,int k)
    {
        if (pq.size()<k)
            pq.push(e);
        else
        {
            if (e > pq.top())
            {
                pq.push(e);
                pq.pop();
            }
        }
    }
    
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for (auto n : nums)
            insert(pq,n,k);
        
        return pq.top();
    
        
    }
};