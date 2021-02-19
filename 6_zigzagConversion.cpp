#include<bits/stdc++.h>
using namespace std;

string convert(string s, int numRows) 
{
    vector<vector<char>> pattern;
    vector<char> p;
    int j=0,direction=1;
    for (int i=0;i<numRows;i++)
	    pattern.push_back(p);
	if (numRows==1)
		direction=0;
	for (size_t i=0; i<s.length(); i++)
	{
		pattern[j].push_back(s[i]);
		j+=direction;
		if (j==numRows-1 || j==0)
			direction*=-1;
	}
	stringstream ss;
	for (int i=0; i<numRows; i++)
	{
		for (size_t j=0; j<pattern[i].size(); j++)
			ss<<pattern[i][j];
	}
	return ss.str();
}

int main()
{
	// string s = "PAYPALISHIRING";
	string s="AB";
	int numRows = 1;
	cout<<convert(s,numRows)<<endl;
	return 0;
}