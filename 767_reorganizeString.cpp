class Solution {
public:
    string reorganizeString(string S) {
        vector<int> v(26,0);
        int mf=0;
        for (char c : S)
        {
            v[c-'a']+=1;
            if (v[c-'a']>v[mf])
                mf=c-'a';
        }
        if (2*v[mf]-1 > S.size()) 
        {
            // cout<<mf<<" "<<S.size()<<endl;
            return "";
        }
        int i=0;
        while (v[mf])
        {
            S[i] = 'a'+mf;
            i+=2;
            v[mf]--;
        }
        // cout<<v[0]<<endl;
        for (int j=0;j<26;j++)
        {
            while (v[j])
            {
                if (i>=S.size())    i=1;
                S[i] = 'a'+j;
                v[j]--;
                i+=2;
            }
        }
        return S;
    }
};