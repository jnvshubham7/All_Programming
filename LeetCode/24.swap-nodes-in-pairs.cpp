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

        if(head==NULL || head->next==NULL)
            return head;
        ListNode* temp=head;
        ListNode* newhead=head->next;
        ListNode* prev=NULL;
        while(temp!=NULL && temp->next!=NULL){
            ListNode* next=temp->next;
            temp->next=next->next;
            next->next=temp;
            if(prev!=NULL)
                prev->next=next;
            prev=temp;
            temp=temp->next;
            
        }
        return newhead;
        
    }
};
// @lc code=end

