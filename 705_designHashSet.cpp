#include<bits/stdc++.h>
using namespace std;

class MyHashSet {
public:
    vector<bool> hash;
    /** Initialize your data structure here. */
    MyHashSet(): hash(1e6+1,false) {
        
    }
    
    void add(int key) {
        hash[key]=true;
    }
    
    void remove(int key) {
        hash[key]=false;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return hash[key];
    }
};

int main()
{
	MyHashSet m;
	m.add(1);
	m.add(1);
	m.add(2);
	cout<<m.contains(22);
}
