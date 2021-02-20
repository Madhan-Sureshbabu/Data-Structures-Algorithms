#include<bits/stdc++.h>
using namespace std;

void assignIndex(string &s)
{
    map<char,int> m1;
    int index=0;
    for(size_t i=0;i<s.size();i++)
    {
        if(m1.count(s[i])==0)
        {
            m1[s[i]]=index;
            s[i]=char(index++);
        }
        else
        {
            s[i]=char(m1[s[i]]);
        }
    }
}
bool isIsomorphic(string s, string t) {
    if (s.size()!=t.size())
        return false;
    assignIndex(s);
    assignIndex(t);
    // cout<<s<<endl<<t<<endl;
    if (!s.compare(t))
        return true;
    else
        return false;        
}

int main()
{
	string s("foo"),t("bar");
	cout<<isIsomorphic(s,t)<<endl;
	return 0;
}