#include<bits/stdc++.h>
using namespace std;

bool checkValidParanthesis(string str)
{
	map<char,char> m; 
	m['('] = ')';
	m['['] = ']';
	m['{'] = '}';
	map<char,char>::iterator it;

	stack<char> s;
	for (size_t i=0; i<str.length(); i++)
	{
		if (m.count(str[i]))
			s.push(str[i]);
		else
		{
			if (s.size() == 0)
				return false;
			if (m[s.top()] != str[i])
				return false;
			else
				s.pop();
		}
	}

	if (s.size() != 0)
		return false;

	return true;
}


int main()
{
	string s = "()()[])";
	cout << checkValidParanthesis(s) <<endl;
	return 0;
}