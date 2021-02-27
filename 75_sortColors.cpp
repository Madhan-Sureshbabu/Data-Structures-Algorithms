#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    void sortColors(vector<int>& nums) {
        int l=0,zero=0,r=nums.size()-1;
        while (l<=r)
        {
            if (nums[l]==0)
                swap(nums[l++],nums[zero++]);
            else if (nums[l]==2)
                swap(nums[r--],nums[l]);
            else
                l++;
        }
    }
    
}

int main()
{
	vector<int> nums = {2,0,2,1,1,0};
	sortColors(nums);
	for (auto n : nums)
		cout<<n<<" ";
}