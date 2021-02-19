#include<bits/stdc++.h>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode *head) {
    if (!head)
        return false;
    
    ListNode *fast = head, *slow = head;
    
    while (fast->next && fast->next->next)
    {            
        slow = slow->next;
        fast = fast->next->next;
        
        if (slow == fast)
            return true;
    }
    return false;
}

int main()
{
	int x = 10;
	ListNode *head = new ListNode(x);//,*head2(x),*head3(0);
	head->val = 1;
	head->next = head;
	cout << hasCycle(head);
	return 0;
}