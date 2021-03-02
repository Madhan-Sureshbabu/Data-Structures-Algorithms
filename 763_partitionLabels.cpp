class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> v(26,-1);
        int n=S.size();
        vector<int> ans;
        if (n==0)
            return ans;
        for (int i=n-1;i>=0;i--)
        {
            if (v[S[i]-'a']==-1)
                v[S[i]-'a']=i;
        }
        int lp,minp=-1,plen=0;
        for (int i=0;i<n;i++)
        {
            lp=v[S[i]-'a'];
            minp = max(minp,lp);
            plen++;
            if (i==minp)
            {
                ans.push_back(plen);
                plen=0;
                minp=-1;
            }
        }
        return ans;
    }
};