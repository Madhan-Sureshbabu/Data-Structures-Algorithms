#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
        if (s.size()!=t.size())
            return false;
        map<char,int> m1,m2;
        size_t i;
        map<char,int>::iterator it;
        
        for (i=0;i<s.length();i++)
            m1[s[i]]++;
        for (i=0;i<t.length();i++)
            m2[t[i]]++;
        
        for(it=m1.begin();it!=m1.end();it++)
        {
            if (!m2[it->first])
                return false;
            else if (m2[it->first] != it->second)
                return false;
        }
        return true;
    }

int main()
{
	string s="anagram",s2="naagram";
	cout<<isAnagram(s,s2)<<endl;
	return 0;
}