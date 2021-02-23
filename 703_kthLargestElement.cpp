#include<bits/stdc++.h>
using namespace std;

#include <iostream>       // std::cout
#include <queue>          // std::priority_queue

class KthLargest {
    int k;
    priority_queue<int,vector<int>,greater<int>> pq;
public:
    KthLargest(int k, vector<int>& nums) : k(k) {
        for (int n : nums)
            add(n);
    }
    
    int add(int val) {
        if (pq.size()<k)
            pq.push(val);
        else if (val>pq.top())
        {
            pq.push(val);
            pq.pop();
        }
        return pq.top();
    }
};

int main()
{
	vector<int> v={1,2,3,4};
	KthLargest *obj = new KthLargest(3,v);
	cout<<obj->add(5)<<endl;
	cout<<obj->add(6)<<endl;
}