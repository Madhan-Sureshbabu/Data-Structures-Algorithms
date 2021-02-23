#include<bits/stdc++.h>
using namespace std;

int countCharacters(vector<string>& words, string chars) {
    int sum=0;
    map<char,int> m1,m2;
    bool good;
    for (auto c : chars)
    {
        m1[c]++;
    }
    for (string s : words)
    {
        good = true;
        for (auto c : s)
            m2[c]++;
        for (auto it = m2.begin();it!=m2.end();it++)
        {                
            if (m1[it->first]<it->second) // || m1.count(it->first)==0)
            {
                good=false;
                // break;
            }
        }
        if (good)
            sum+=s.size();
        m2.erase(m2.begin(),m2.end());
        cout<<s<<" "<<sum<<endl;
    }
    return sum;
}   

int main()
{
	vector<string> s2 = {"hello","world","leetcode"};
	string s = "welldonehoneyr";
	cout<<countCharacters(s2,s)<<endl;
}