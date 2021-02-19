#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for (int i=0; i<nums.size(); i++)
        {
            if (m.count(nums[i])>0)
                m[nums[i]]++;
            else
                m[nums[i]]=0;
        }
        map<int,int>::iterator it;
        int majority,count;
        for (it=m.begin();it!=m.end();it++)
        {
            if (it==m.begin())
            {
                majority = it->first;
                count = it->second;
            }
            else if (it->second > count)
            {
                majority = it->first;
                count = it->second;
            }
        }
        return majority;
    }

int main()
{
	vector<int> v = {1,1,2};
	cout<<majorityElement(v)<<endl;
	return 0;
}