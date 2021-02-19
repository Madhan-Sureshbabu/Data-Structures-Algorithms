#include<bits/stdc++.h>
using namespace std;

int sqsum(int n)
{
    int s = 0;
    while (n)
    {
        s += pow(n%10,2);
        n/=10;
    }
    return s;
}
/*
A happy number is a number defined by the following process:
    Starting with any positive integer, replace the number by the sum of the squares of its digits.
    Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
    Those numbers for which this process ends in 1 are happy.
*/
bool isHappy(int n) { 
    bool r[1000]; // since max val of n < 2^31 - 1
    memset(r,0,sizeof(r));
    n = sqsum(n);
    while (!r[n])
    {
        r[n]=true;
        
        if (n==1)
            return true;
        
        n = sqsum(n);
    }
    return false;
}

int main()
{
    cout<<isHappy(101)<<endl;
    return 0;
}