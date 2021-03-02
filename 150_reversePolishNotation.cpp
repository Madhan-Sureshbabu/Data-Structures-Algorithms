class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        int ans, v1;        
        unordered_map<string,function<int (int,int)> > map = {
            {"+",[] (int a,int b) {return a+b;}},
            {"-",[] (int a,int b) {return a-b;}},
            {"*",[] (int a,int b) {return a*b;}},
            {"/",[] (int a,int b) {return a/b;}}
        };
        for (string s1 : tokens)
        {
            if (map.count(s1)==0)
                stk.push(stoi(s1));
            else
            {
                int op1=stk.top();
                stk.pop();
                int op2=stk.top();
                stk.pop();
                stk.push(map[s1](op2,op1));
            }
        }
        return stk.top();
    }
    //     for (string s1 : tokens)
    //     {
    //         if (s1=="+")
    //         {
    //             v1=stk.top();
    //             stk.pop();
    //             ans = v1+stk.top();
    //             stk.pop();
    //             stk.push(ans);
    //         }
    //         else if (s1=="-")
    //         {
    //             v1=stk.top();
    //             stk.pop();
    //             ans = -v1+stk.top();
    //             stk.pop();
    //             stk.push(ans);
    //         }
    //         else if(s1=="*")
    //         {
    //             v1=stk.top();
    //             stk.pop();
    //             ans = v1*stk.top();
    //             stk.pop();
    //             stk.push(ans);
    //         }
    //         else if (s1=="/")
    //         {
    //             v1=stk.top();
    //             stk.pop();
    //             ans = stk.top()/v1;
    //             stk.pop();
    //             stk.push(ans);
    //         }
    //         else
    //         {
    //             stk.push(stoi(s1));
    //         }
    //     }
    //     return stk.top();
    // }
        
};