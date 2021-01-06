#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

void merge(ll arr[],ll temp[],ll leftStart,ll rightEnd, ll &inversionCount)
{
	ll leftEnd = (leftStart + rightEnd)/2;
	ll rightStart = leftEnd + 1;
	ll left=leftStart, right=rightStart;
	ll index=leftStart;
	while (left <= leftEnd && right <= rightEnd)
	{
		if (arr[left] <= arr[right])
		{
			temp[index]=arr[left];
			left++;
		}
		else
		{
			temp[index]=arr[right];
			right++;
			inversionCount+=right-index;
		}
		index++;
	}
	while (left<=leftEnd)
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

void mergeSort(ll arr[],ll temp[],ll leftStart,ll rightEnd, ll &inversionCount)
{
	ll middle = (leftStart + rightEnd)/2;
	if (leftStart<middle)
	{
		mergeSort(arr,temp,leftStart,middle,inversionCount);
		mergeSort(arr,temp,middle+1,rightEnd,inversionCount);
	}
	merge(arr,temp,leftStart,rightEnd,inversionCount);
}

ll countInversions(ll arr[],ll n)
{
	ll temp[n];
	ll inversionCount=0;
	mergeSort(arr,temp,0,n-1,inversionCount);
	for (ll i=0;i<n;i++)
		cout<<temp[i]<<" ";
	return inversionCount;
}



int main()
{
	ll d,n,i,j,arr[100000],cnt;
	// cin>>d;
	cin>>n;
	for (j=0;j<n;j++)
	{
		cin>>arr[j];
	}
	cnt = countInversions(arr,n);
	cout << endl << "inversionCount : " << cnt << endl;
	return 0;
}