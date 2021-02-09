#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num) {
    unsigned long long int i=1;
    while (i*i <= num)
    {
        if (i*i == num)
            return true;
        i++;
    }
    return false;
}

int main()
{
	cout << isPerfectSquare(16) << endl;
	return 0;
}