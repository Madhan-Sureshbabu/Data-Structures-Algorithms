class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode *tmp = head;
        if (!tmp) return head;
        vector<int> v;
        int j;
        while (tmp)
        {
            v.push_back(tmp->val);
            tmp = tmp->next;
        }
        for (int i=0;i<v.size();i++)
        {
            int sum=0;
            for (j=i;j<v.size();j++)
            {
                sum += v[j];
                if (sum==0)
                    break;
            }
            if (sum==0)
            {
                v.erase(v.begin()+i,v.begin()+j+1);
                i--;
            }
        }
        if (v.size()==0) return nullptr;
        ListNode *root = new ListNode(v[0]);
        tmp = root;
        for (int i=1;i<v.size();i++)
        {
            tmp->next = new ListNode(v[i]);
            tmp = tmp->next;
        }
        return root;
    }
};