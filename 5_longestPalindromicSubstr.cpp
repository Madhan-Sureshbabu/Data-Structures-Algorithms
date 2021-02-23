#include<bits/stdc++.h>
using namespace std;

bool isParlindrome(string ss)
{
    int i=0,j=ss.size()-1;
    while (i<j)
    {
        if (ss[i++]!=ss[j--])
            return false;
    }
    return true;
}
    
    string longestPalindrome(string s) {
        int n = s.size();
        bool dp[n][n];
        string res="";
        memset(dp,0,sizeof(dp));
        
        if (n==0)
            return "";
        if (n==1)
            return s;
        
        for (int i=0;i<n;i++)
            dp[i][i]=true;
        res += s[0];
        for (int i=n-2;i>=0;i--)
        {
            for (int j=i+1;j<n;j++)
            {
                if (s[i]==s[j])
                {
                    if (j-i==1 || dp[i+1][j-1])
                    {
                        dp[i][j]=true;
                        if (res.size() < j-i+1)
                        {
                            res = s.substr(i,j-i+1);
                        }
                    }
                }   
            }
        }
        return res;
    }

int main()
{
    cout<<longestPalindrome("aaaa")<<endl;
}