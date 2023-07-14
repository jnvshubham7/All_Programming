/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        //two pointer approach

        ListNode* a = headA;
        ListNode* b = headB;

        while(a != b){
            a = a == NULL ? headB : a->next;
            b = b == NULL ? headA : b->next;
        }

        return a;


        
    }
};
// @lc code=end

