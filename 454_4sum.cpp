class Solution {
    int ans;
    int N;
public:
    
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        N = A.size();
        if (N==0)
            return 0;
        map<int,int> m;
        // backtrack(A,B,C,D,0,0,0,0);
        for (int a : A)
        {
            for (int b : B)
            {
                m[a+b]++;
            }
        }
        int ans=0;
        for (int c : C)
        {
            for (int d : D)
            {
                if (m.find(-(c+d))!=m.end()) ans+=m[-(c+d)];
            }
        }
        return ans;
    }
};