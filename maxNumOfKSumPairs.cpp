#include<bits/stdc++.h>
using namespace std;


int maxOperations(vector<int>& nums, int k) {
        map<int,int> m;
        for (int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }
        map<int,int>::iterator it1;
        int op = 0;
        for (it1=m.begin(); it1!=m.end(); it1++)
        {
            if (it1->first != k-it1->first)
                op += min(m[it1->first],m[k-it1->first]);
            else 
                op += floor(m[it1->first]/2);
            // m.erase(it1->first);
            m[it1->first] = 0;
        }
        return op;
    }


int main()
{
    vector<int> nums = {1,4,3,2};//{3,1,4,3,1,3};
    int k=5;
    cout << maxOperations(nums,k) << " pairs " << endl;
    return 0;
}