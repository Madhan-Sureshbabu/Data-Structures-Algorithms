#include <bits/stdc++.h>
using namespace std;

int getMaximumGenerated(int n) {
        int i;
        if (n==0 || n==1)
        	return n;
        vector<int> v(n+1,0);
        v[0] = 0; v[1] = 1;
        int max1 = 1;
        for (i=2; i<=n; i++)
        {
            v[i] = i % 2 ? v[i/2] + v[i/2 + 1] : v[i/2];
            max1 = max(max1, v[i]);
        }
        // for (i=0; i<=n; i++)
        // 	cout << v[i] << " ";
        return max1;
    }

int main()
{
	cout << endl<< getMaximumGenerated(5) << endl;
}