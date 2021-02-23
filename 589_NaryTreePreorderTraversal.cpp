#include<bits/stdc++.h>
using namespace std;


class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


void recur(Node* root,vector<int>& po)
{
    po.push_back(root->val);
    for (Node* n : root->children)
        recur(n,po);
    
}

void iterative(Node* root,vector<int>& po)
{
    stack<Node*> s;
    s.push(root);
    while (s.empty()==false)
    {
        Node* node = s.top();
        s.pop();
        po.push_back(node->val);
        reverse(node->children.begin(),node->children.end());
        for (Node* n : node->children)
            s.push(n);
    }
}

vector<int> preorder(Node* root) {
    vector<int> po;
    if (root!=NULL)
        iterative(root,po);
    return po;
}

int main()
{
	Node* root = new Node(1);
	Node* n1 = new Node(3);
	Node* n2 = new Node(2);
	Node* n3 = new Node(4);
	Node* n4 = new Node(5);
	Node* n5 = new Node(6);
	root->children = {n1,n2,n3};
	n1->children = {n4,n5};
	vector<int> v = preorder(root);
	for (int i : v)
		cout<<i<<" ";
	cout<<endl<<*(v.end()-1)<<endl;
}