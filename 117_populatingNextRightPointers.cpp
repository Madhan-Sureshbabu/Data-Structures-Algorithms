#include<bits/stdc++.h>
using namespace std;

Node* connect(Node* root) {
    
    Node* cur=root;
    Node* head=nullptr;
    Node* prev=nullptr;
    while (cur!=nullptr)
    {
        while (cur!=nullptr)
        {
            if (cur->left!=nullptr)
            {
                if (prev==nullptr)
                    head=cur->left;
                else
                    prev->next=cur->left;
                prev = cur->left;
            }
            if (cur->right!=nullptr)
            {
                if (prev==nullptr)
                    head=cur->right;
                else
                    prev->next=cur->right;
                prev=cur->right;
            }
            cur=cur->next;
        }
        cur=head;
        prev=nullptr;
        head=nullptr;
    }
    return root;
}
