#include<bits/stdc++.h>
using namespace std;

void recur(vector<int> &nums,vector<vector<int>> &v, int pos)
{
    if (pos==nums.size()-1)
        v.push_back(nums);
    else
    {
        for (int i=pos;i<nums.size();i++)
        {
            swap(nums[pos],nums[i]);
            recur(nums,v,pos+1);
            swap(nums[pos],nums[i]);
        }
    }
    return;
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> v;
    recur(nums,v,0);
    return v;
}

int main()
{
    vector<int> nums = {1,2,3};
    vector<vector<int>> v=permute(nums);
    for (auto v1 : v)
    {
        for (auto v2 : v1)
            cout<<v2<<" ";
        cout<<endl;
    }
}