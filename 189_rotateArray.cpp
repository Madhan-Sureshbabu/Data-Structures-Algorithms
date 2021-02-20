#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        reverse(nums.begin(),nums.end()-k);
        reverse(nums.end()-k,nums.end());
        reverse(nums.begin(),nums.end());
    }

int main()
{
	vector<int> v={1,2,3,4};
	int k=3;
	rotate(v,k);
	for (int n : v)
	{
		cout<<n<<" ";
	}
	return 0;
}