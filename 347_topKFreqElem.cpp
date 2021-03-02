class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for (auto n : nums)
            m[n]++;
        
        priority_queue<pair<int,int>> pq;
        vector<int> v;
        for (auto it=m.begin();it!=m.end();it++)
        {
            pq.push(pair<int,int> (it->second,it->first));
            if (m.size()-pq.size()<k)
            {
                v.push_back(pq.top().second);
                pq.pop();
            }
        }
        return v;
        
        
    }
};