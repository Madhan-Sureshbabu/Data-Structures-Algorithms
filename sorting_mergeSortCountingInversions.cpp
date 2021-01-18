#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

void merge(ll arr[],ll temp[],ll leftStart,ll middle ,ll rightEnd, ll &inversionCount)
{
	ll left=leftStart, right=middle+1;
	ll index=leftStart;
	while (left <= middle && right <= rightEnd)
	{
		if (arr[left] <= arr[right])
		{
			temp[index++]=arr[left++];
		}
		else
		{
			temp[index++]=arr[right++];
			inversionCount+=(middle-leftStart+1-(left-leftStart));
		}
	}
	while (left<=middle)
	{
		temp[index]=arr[left];
		left++; index++;
	}
	while (right<=rightEnd)
	{
		temp[index]=arr[right];
		right++; index++;
	}
}

void assign(ll arr[], ll temp[], ll start, ll end)
{
	for (ll i=start; i<end; i++)
		arr[i] = temp[i];
}

void mergeSort(ll arr[],ll temp[],ll leftStart,ll rightEnd, ll &inversionCount)
{
	if (leftStart<rightEnd)
	{
		ll middle = (leftStart + rightEnd)/2;
		mergeSort(arr,temp,leftStart,middle,inversionCount);
		mergeSort(arr,temp,middle+1,rightEnd,inversionCount);
		assign(arr,temp,leftStart,rightEnd);
		merge(arr,temp,leftStart,middle,rightEnd,inversionCount);
	}
}

ll countInversions(ll arr[],ll n)
{
	ll temp[n];
	for (int i=0; i<n; i++)
		temp[i] = arr[i];
	ll inversionCount=0;
	mergeSort(arr,temp,0,n-1,inversionCount);
	return inversionCount;
}



int main()
{
	ll d,n,i,j,arr[100000],cnt;
	vector<int> count;
	cin>>d;
	for (i=0; i<d; i++)
	{
		cin>>n;
		for (j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		count.push_back(countInversions(arr,n));
	}
	for (i=0; i<count.size(); i++)
		cout<<count[i]<<endl;
	return 0;
}

