class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> v;
        for (auto n : nums)
            v.push_back(to_string(n));
        sort(v.begin(),v.end(),[](string a,string b){return a+b>b+a;});
        // reverse(v.begin(),v.end());
        string ans;
        for (auto s : v)
        {
            ans+=s;
        }
        if (ans[0]=='0')
            return "0";
        return ans;
    }
};