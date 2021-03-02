#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v = {1,2,3,4,2};
	auto comp = [](int a,int b){ return a>b;};
	sort(v.begin(),v.end(),comp);
	for (int a : v)
		cout<<a<<" ";
	cout<<endl;
}