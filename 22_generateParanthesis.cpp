#include<bits/stdc++.h>
using namespace std;

class Solution {
    int N;
    vector<string> v;
public:
    void generate(string s,int left, int right)
    {
        if (s.length()==2*N)
        {
            v.push_back(s);
        }
        
        if (left<N)
        {
            generate(s+"(",left+1,right);
        }
        if (right<left)
        {
            generate(s+")",left,right+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        N = n;
        generate("",0,0);
        return v;
    }
};

int main()
{
    Solution sol;
    vector<string> v = sol.generateParenthesis(3);
    for (auto s : v)
    {
        cout<<s<<" ";
    }
    cout<<endl;
}