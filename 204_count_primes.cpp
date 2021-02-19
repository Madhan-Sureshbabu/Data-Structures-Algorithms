#include<bits/stdc++.h>
using namespace std;

int countPrimes(int n) {
        if (n==0)
            return 0;
        vector<bool> v(n,true);
        v[0]=false;
        v[1]=false;
        for (int i=0; i<=sqrt(n); i++)
        {
            if (v[i])
            {
                for (int j=2; i*j<n; j++)
                    v[i*j]=false;
            }
        }
        return count(v.begin(),v.end(),true);
    }

int main()
{
	cout<<countPrimes(16)<<endl;
	return 0;
}
