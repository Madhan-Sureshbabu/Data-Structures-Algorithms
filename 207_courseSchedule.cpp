#include<bits/stdc++.h>
using namespace std;

bool cycle(vector<int> adj[],vector<int>& vis, int i)
{
    if (vis[i]==1)
    {
    	cout<<"index : "<<i<<" = 1"<<endl;
        return true;
    }
    else if (vis[i]==0)
    {
    	cout<<"index : "<<i<<" = 0"<<endl;
        vis[i]=1;
        for (auto e : adj[i])
        {
            if (cycle(adj,vis,e))
                return true;
        }
    }
    vis[i]=2;
    cout<<"index : "<<i<<" assigned 2"<<endl;
    return false;
}

bool canFinish(int numCourses, vector<vector<int>>& prereq) {
    int n=numCourses;
    vector<int> vis(n,0);
    vector<int> adj[n];
    for (auto s : prereq)
    {
        adj[s[0]].push_back(s[1]);
    }
    for (int i=0;i<n;i++)
    {
    	for (auto s: adj[i])
    		cout<<"index : "<<i<<":"<<s<<" ";
    	cout<<endl;
    }
    for (int i=0;i<n;i++)
    {
        if (cycle(adj,vis,i))
            return false;
    }
    return true;
}

int main()
{
	vector<int> v = {1,0};
	vector<vector<int>> vv{v};
	cout<<canFinish(2,vv);
}