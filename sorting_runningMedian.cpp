#include <bits/stdc++.h>
#include <math.h>
using namespace std;

typedef long long int ll;

int main()
{
	ll n,d,i,j,low_median,high_median,double_median,notice=0,position;
	cin>>n>>d;
	ll arr[200000],count[201];
	for (i=0;i<n;i++)
		cin>>arr[i];
	for (i=0;i<d;i++)
		count[arr[i]]++;
	for (i=d;i<n;i++)
	{
		position=0;low_median=-1;high_median=-1;
		for (j=0;j<201;j++)
		{
			position += count[j];
			if (low_median == -1 && position>=floor((d+1)/2.0))
				low_median = j;
			if (high_median == -1 && position>=ceil((d+1)/2.0))
				high_median = j;
		}
		double_median = low_median + high_median;
		cout<<"low_median : "<<low_median<<" high_median : "<<high_median<<endl;
		if (arr[i] >= double_median)
			notice++;
		count[arr[i]]++;
		count[arr[i-d]]--;
	}
	cout<<notice<<endl;
	return 0;
}