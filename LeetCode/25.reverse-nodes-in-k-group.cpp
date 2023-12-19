/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* fun(ListNode* s,ListNode* e)
    {
        if(s==e)
        {
            return s;
        }
        ListNode* node=fun(s->next,e);
        s->next->next=s;
        s->next=NULL;
        return node;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==1)
        {
            return head;
        }
        ListNode* s=head;
        ListNode* e=head;
        int cnt=k-1;
        while(cnt--)
        {
            e=e->next;
            if(e==NULL)
            {
                return head;
            }
        }
        ListNode* t=reverseKGroup(e->next,k);
        fun(s,e);
        s->next=t;
        return e;
    }
};