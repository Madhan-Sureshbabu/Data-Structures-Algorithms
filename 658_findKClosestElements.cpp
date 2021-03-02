class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;
        for (int n : arr)
        {
            pq.push({abs(n-x),n});
            if (pq.size()>k)
                pq.pop();
        }
        vector<int> v;
        for (int i=0;i<k;i++)
        {
            v.push_back(pq.top().second);
            pq.pop();            
        }
        sort(v.begin(),v.end());
        return v;
    }
};