/*
 * @lc app=leetcode id=24 lang=cpp
 *
 * [24] Swap Nodes in Pairs
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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
        {
            return head;
        }

        vector<int> v;
        ListNode* p = head;
        while(p != nullptr) {
            v.push_back(p->val);
            p = p->next;
        }

        int n = v.size();
       if(n%2 == 0)
       {
              for(int i = 0; i < n; i+=2)
              {
                int temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
              }
         }
         
         else
         {
              for(int i = 0; i < n-1; i+=2)
              {
                int temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
              }
         }
        
       
       

        
        ListNode* head1 = new ListNode(v[0]);
        ListNode* p1 = head1;
        for(int i = 1; i < v.size(); i++) {
            p1->next = new ListNode(v[i]);
            p1 = p1->next;
        }

        return head1;

       
        
    }
};
// @lc code=end





















//  if(head==NULL || head->next==NULL)
//             return head;
//         ListNode* temp=head;
//         ListNode* newhead=head->next;
//         ListNode* prev=NULL;
//         while(temp!=NULL && temp->next!=NULL){
//             ListNode* next=temp->next;
//             temp->next=next->next;
//             next->next=temp;
//             if(prev!=NULL)
//                 prev->next=next;
//             prev=temp;
//             temp=temp->next;
            
//         }
//         return newhead;