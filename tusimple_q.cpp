#include<bits/stdc++.h>
using namespace std;

void populate(set<vector<int>> &s,vector<int> &v,int p,int g,int pos)
{
	if (accumulate(v.begin(),v.end(),0)==p)
	{
		vector<int> v2 = v;
		sort(v2.begin(),v2.end());
		if (s.count(v2)==0)
			s.insert(v2);
		return;
	}
	while (accumulate(v.begin(),v.end(),0)<p)
	{
		if (pos<g-1)
		{
		// 	if (pos>0)
		// 	{
		// 		while (v[pos]<v[pos-1])	v[pos]++;
		// 	}
		// 	else 
			v[pos]++;
			if (accumulate(v.begin(),v.end(),0)<p)
				populate(s,v,p,g,pos+1);
			else
			{
				v[pos]=1;
				break;
			}
		}
		else
		{
			v[pos]= p - accumulate(v.begin(),v.end(),0);
			if (v[pos]>=v[pos-1])
				populate(s,v,p,g,pos+1);
			v[pos]=0;
			return;
		}
	}
}


int main()
{
	int p=7,g=3;
	set<vector<int>> s;
	vector<int> v(g,0);
	populate(s,v,p,g,0);
	for (auto s1 : s)
	{
		for (auto v1 : s1)
			cout<<v1<<" ";
		cout<<endl;
	}
	cout << s.size()<<endl;
}