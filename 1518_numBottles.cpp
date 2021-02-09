#include<bits/stdc++.h>
using namespace std;

int numWaterBottles(int numBottles, int numExchange) {
    int total=0,empty=0;
    while (numBottles!=0)
    {
    	total+=numBottles;
    	empty+=numBottles;
    	numBottles=empty/numExchange;
    	empty-=numBottles*numExchange;
    }
    return total;
}

int main()
{
	cout<<numWaterBottles(15,4);
	return 0;
}