#include<bits/stdc++.h>
using namespace std;

class MinStack {
private :
    stack<int> s1;
    stack<int> s2;
    
public:
    
    void push(int x) {
        s1.push(x);
        if (s2.empty() || x < s2.top())
        {
            s2.push(x);
        }
    }
    
    void pop() {
        if (s1.top()==s2.top())
        {
            s2.pop();
        }
        s1.pop();
    }
    
    int top() {
       return s1.top();
    }
    
    int getMin() {
       return s2.top();
    }
};

int main()
{
	MinStack ms;
	ms.push(-1);
	ms.push(0);
	cout<<ms.getMin()<<endl;
	cout<<ms.top()<<endl;
	return 0;
}