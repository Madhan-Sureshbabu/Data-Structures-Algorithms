#include<bits/stdc++.h>
using namespace std;

int alternateCharacters(string s)
{
	int num=0;
	for (int i=1; s[i]!='\0'; i++)
	{
		if (s[i-1]==s[i])
			num += 1;
	}
	return num;
}

int main()
{
	int q, deletion=0;
	cin>>q;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	for (int i=0; i<q; i++)
	{
		string s;
		getline(cin,s);
		deletion = alternateCharacters(s);
		// cout<<deletion<<endl;
		cout<<"i: "<<i<<", num: "<<deletion<<endl;
	}
	return 0;
}