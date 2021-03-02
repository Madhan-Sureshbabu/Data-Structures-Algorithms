class Solution {
public:
    int characterReplacement(string s, int k) {
        int r=0,l=0,m=0;
        int alphabet[26]={0};
        while (r<s.length())
        {
            alphabet[s[r]-'A']++;
            m = max(m,alphabet[s[r]-'A']);
            r++;
            if (r-l-m > k)
            {
                alphabet[s[l]-'A']--;
                l++;
            }
        }
        return r-l;
    }
};