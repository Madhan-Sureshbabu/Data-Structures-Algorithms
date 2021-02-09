#include<bits/stdc++.h>
using namespace std;

 double average(vector<int>& salary) {
        int sal_min=1e6, sal_max=1e3;
        double net=0;
        for (int i=0; i<salary.size(); i++)
        {
        	net+=salary[i];
        	if (salary[i]<=sal_min)
        		sal_min=salary[i];
        	if (salary[i]>=sal_max)
        		sal_max=salary[i];
        }
        net-=(sal_max+sal_min);
        net/=(salary.size()-2);
        return net;
    }

int main()
{
	vector<int> salary = {1000,2000,3000,4000};
	cout<<average(salary);
	return 0;
}