class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> res;
        for (int i=0;i<nums.size();i++)
        {
            auto it= lower_bound(res.begin(),res.end(),nums[i]);
            // cout<<"i : "<<i<<"; "<<nums[i]<<";"<<"res : ";
            // for (auto r : res)
            //     cout<<r<<" ";
            // cout<<"; it pos : "<<it-res.begin()<<endl;
            if (it==res.end())  res.push_back(nums[i]);
            else    *it = nums[i];
        }
        return res.size();
        
        // if (nums.size()==0)
        //     return 0;
        // int len=1,last=nums[0],m=len;
        // for (int i=1;i<nums.size();i++)
        // {
        //     cout<<nums[i]<<", "<<last<<"; "<<len<<", "<<m<<endl;
        //     if (nums[i]>last)
        //         len++;
        //     else
        //         len=1;
        //     last=nums[i];
        //     if (len>m)
        //         m=len;
        // }
        // return m;   
    }
};