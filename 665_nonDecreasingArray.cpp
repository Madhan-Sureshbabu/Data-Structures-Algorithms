#include<bits/stdc++.h>
using namespace std;

void print(vector<int> v)
{
	for (int n: v)
		cout<<n<<" ";
	cout<<endl;
}

bool checkPossibility(vector<int>& nums) {
    bool dec=false;
    int idx;
    for (int i=0;i<nums.size()-1;i++)
    {
        if (nums[i]-nums[i+1]>0)
        {
            dec=true;
            idx=i;
            break;
        }
    }
    if(dec)
    {
        vector<int> tmp1(nums);
        vector<int> tmp2(nums);
        tmp1[idx]=tmp1[idx+1];
        tmp2[idx+1]=tmp2[idx];
        // print(nums);
        // print(tmp1);
        // print(tmp2);
        return is_sorted(tmp1.begin(),tmp1.end()) || is_sorted(tmp2.begin(),tmp2.end());
    }
    return is_sorted(nums.begin(),nums.end());
}

int main()
{
	vector<int> v = {2,3,3,2,4};
	cout<<checkPossibility(v);
}