/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        l1=reverse(l1);
        l2=reverse(l2);

        unsigned long long  int num1=0,num2=0,result=0;
        ListNode* head=NULL;
        num1=l1->val;
        l1=l1->next;
        while(l1!=NULL)
        {
            num1=num1*10+l1->val;
            l1=l1->next;
        }
        num2=l2->val;
        l2=l2->next;
        while(l2!=NULL)
        {
            num2=num2*10+l2->val;
            l2=l2->next;
        }

        result=num1+num2;
        if(result==0)
        {
            head=new ListNode(0);
            return head;
        }
        else
        {
            while(result!=0)
            {
                ListNode* temp=new ListNode(result%10);
                temp->next=head;
                head=temp;
                result=result/10;
            }
        }
        ListNode* x=reverse(head);
        return x;


        
    }

    ListNode* reverse(ListNode* head)
    {
        if(head==NULL || head->next==NULL) return head;

        ListNode* chotaHead=reverse(head->next);

        head->next->next=head;

        head->next=NULL;

        return chotaHead;
    }

};
// @lc code=end

