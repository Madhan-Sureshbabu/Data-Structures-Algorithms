#include<bits/stdc++.h>
using namespace std;

int makeAnagram(string a, string b)
{
	int result=0;
	map<char,long> m1,m2;
	for (int i=0; a[i]!='\0'; i++)
		m1[a[i]]++;
	for (int j=0; b[j]!='\0'; j++)
		m2[b[j]]++;
	for (int i=0; a[i]!='\0'; i++)
	{
		result += m1[a[i]]>m2[a[i]] ? m1[a[i]]-m2[a[i]] : m2[a[i]]-m1[a[i]];
	}
	for (int i=0; b[i]!='\0'; i++)
	{
		if (m1[b[i]]==0)
			result += m2[b[i]];
	}
	return result;
}

int main()
{
	string a,b;
	getline(cin,a);
	getline(cin,b);
	int result = makeAnagram(a,b);
	cout<<result<<endl;
	return 0;
}