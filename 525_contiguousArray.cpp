class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        map<int,int> m;
        int val,net=0,l=0,maxl=0;
        m[0]=-1;
        for (int i=0;i<n;i++)
        {
            if (nums[i]==0)
            {
                val = -1;
            }
            else
                val = 1;
            net+= val;
            if (m.find(net)==m.end())
                m[net]=i;
            else
            {
                l= i-m[net];
                if (l>maxl)
                    maxl=l;
            }
        }
        return maxl;
    }
};