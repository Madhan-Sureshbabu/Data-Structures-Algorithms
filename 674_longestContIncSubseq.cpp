#include<bits/stdc++.h>
using namespace std;


int findLengthOfLCIS(vector<int>& nums) {
	if (nums.size()==0)
		return 0;
    int count=1,maxCount=1;
    for (int i=1;i<nums.size();i++)
    {
        if (nums[i-1]<nums[i])
        {
        	cout<<nums[i-1]<<" is less than "<<nums[i]<<" count is "<<count<<endl;
            count++;
        }
        else
        {
        	cout<<nums[i-1]<<" is greater than "<<nums[i]<<endl;
            if (count>maxCount)
                maxCount=count;
            count=1;
            cout<<"maxCount is "<<maxCount<<endl;
        }
    }
    if (count>maxCount)
        return count;
    return maxCount;
}

int main()
{
	vector<int> v={1,3,5,7};
	cout<<findLengthOfLCIS(v)<<endl;
}