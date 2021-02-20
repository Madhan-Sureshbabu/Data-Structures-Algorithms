#include<bits/stdc++.h>
using namespace std;

int getSum(int a, int b) {
    int sum;
    while (b!=0)
    {
        sum = a ^ b;
        b = (unsigned int)(a & b) << 1;
        a = sum;
    }
    return sum;
}

int main()
{
	cout<<getSum(2,3)<<endl;
}