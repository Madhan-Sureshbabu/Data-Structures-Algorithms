#include<bits/stdc++.h>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) 
{
    vector<int> ans;
    for (int i=0;i<nums.size();i++)
    {
        if (nums[abs(nums[i])-1]>0)
            nums[abs(nums[i])-1] *= -1;
    }

    for (int i=0;i<nums.size();i++)        
    {
        if (nums[i]>0)
            ans.push_back(i+1);
    }
    return ans;
}

int main()
{
	vector<int> v = {3,3,2,2};
	vector<int> ans = findDisappearedNumbers(v);
	for (int a : ans)
		cout<<a<<" ";
}