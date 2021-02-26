#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int start=0,end=nums.size(),mid,left,right;
    while (start<end)
    {
        mid=(start+end)/2;
        if (target<=nums[mid])
            end=mid;
        else
            start=mid+1;
    }
    left=start;
    start=0,end=nums.size();
    while (start<end)
    {
        mid=(start+end)/2;
        if (target<nums[mid])
            end=mid;
        else
            start=mid+1;
    }
    right=start;
    return left==right ? vector<int> {-1,-1} : vector<int>{left,right-1};
}

int main()
{
	vector<int> nums = {1,2,2,3,3,4,4,5};
	vector<int> v = searchRange(nums,4);
	for (auto n : v)
		cout<<n<<" ";
}