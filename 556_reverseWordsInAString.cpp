#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    int begin=0,end=-1;
    for (size_t i=0;i<s.size();i++)
    {
        if (s[i]==' ')
        {
            end = i;
            reverse(s.begin()+begin,s.begin()+end);
            begin = end+1;
        }
    }
    reverse(s.begin()+begin,s.end());
    return s;
}

int main()
{
	string s="Let's take LeetCode contest";
	cout<<reverseWords(s)<<endl;
}