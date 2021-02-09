#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;

int xorOperation(int n, int start) {
    ll x=0;
    int i=0;
    while (i<n)
    {
        x = x ^ (start+2*i);
        i++;
    }
    return x;
}

int main()
{
	cout<<xorOperation(5,0);
	return 0;
}