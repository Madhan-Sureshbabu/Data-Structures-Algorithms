class Solution {
public:
    string reverseWords(string s) {
        int b=0;
        
        string ans;
        for (int i=0;i<s.size();i++)
        {
            if (s[i]==' ')
            {
                if (i>b)
                {
                    ans = s.substr(b,i-b) + " " + ans;
                }
                b = i+1;
            }
            else if (i==s.size()-1)
            {
                ans = s.substr(b,s.size()-b) + " " + ans;
            }
        }
        return ans.substr(0,ans.size()-1);
        
        // stack<string> stk;
        // for (int i=0;i<s.size();i++)
        // {
        //     if (s[i]==' ')
        //     {
        //         b=e+1;
        //         e=i;
        //         stk.push(s.substr(b,e-b));
        //     }
        // }
        // stk.push(s.substr(e+1,s.size()-e-1));
        // string a;
        // while (!stk.empty())
        // {
        //     a += stk.top();
        //     stk.pop();
        //     if (stk.size()>0)
        //         a += " ";
        // }
        // return a;
    }
};