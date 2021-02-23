#include<bits/stdc++.h>
using namespace std;


int peakIndexInMountainArray(vector<int>& arr) {
    int i;
    for (i=1;arr[i]<arr[i+1];i++);
    
    return i;
}

int main()
{
	vector<int> v= {0,1,0};
	cout<<peakIndexInMountainArray(v)<<endl;
}