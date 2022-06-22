/*
 * @lc app=leetcode id=92 lang=cpp
 *
 * [92] Reverse Linked List II
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {


        //use recursion 

        

        // ListNode* curr=head;
        // ListNode* prev=head;

        // stack<int> st;

        // for(int i=0;i<left;i++)
        // {
        //     prev=curr;
        //     curr=curr->next;
            
        // }

        // for(int i=0;i<=right;i++)
        // {
        //     st.push(curr->val);
        //     curr=curr->next;
        // }

        // for(int i=0;i<=right;i++)
        // {
        //     prev->val=st.top();
        //     st.pop();
        //     prev=prev->next;
        // }

        // return head;



        
    }
};
// @lc code=end

