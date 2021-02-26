#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    int water = 0;
    int i=0,j=height.size()-1,h;
    while (i<j)
    {
        h = min(height[i],height[j]);
        // if (water< h*(j-i))
        //     water = h*(j-i);
        water = max(water,h*(j-i));
        while (h>=height[i] && i<j) i++;
        while (h>=height[j] && i<j) j--;
    }
    return water;
}

int main()
{
	vector<int> h = {1,8,6,2,5,4,8,3,7};
	cout<<maxArea(h)<<endl;
}
