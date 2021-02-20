#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums;
        int i,j,k;
        for (i=0,j=0,k=0;i<m+n;i++)
        {
        	if (j>=m || k>=n)
        		break;

            if (nums1[j]<=nums2[k])
            {
                nums.push_back(nums1[j]);
                j++;
            }
            else 
            {
                nums.push_back(nums2[k]);
                k++;
            }
        }
    	while (j<m)
    		nums.push_back(nums1[j++]);
    	while(k<n)
    		nums.push_back(nums2[k++]);

        nums1.erase(nums1.begin(),nums1.end());
        for (auto n : nums)
            nums1.push_back(n);
    }

void mergeElegantSolution(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
	int i=m-1, j=n-1, f=m+n-1;
	while (j>=0)
	{
		nums1[f--] = (i>=0 && nums1[i]>nums2[j]) ? nums1[i--] : nums2[j--];
	}

}

int main()
{
	vector<int> v1 = {1,4,6,0,0}, v2 = {3,5};
	mergeElegantSolution(v1,3,v2,2);
	for (int n : v1)
		cout<<n<<" ";

}    