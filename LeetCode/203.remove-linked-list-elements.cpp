/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
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
    ListNode* removeElements(ListNode* head, int val) {

        if(head==NULL)
        {
            return head;
        }

        vector<int> v;
        ListNode* p = head;
        while(p != nullptr) {
            v.push_back(p->val);
            p = p->next;
        }
        vector<int> v1;
        for(int i = 0; i < v.size(); i++) {
            if(v[i] != val) {
                v1.push_back(v[i]);
            }
        }
        if(v1.size()==0)
        {
            return nullptr;
        }
        ListNode* head1 = new ListNode(v1[0]);
        ListNode* p1 = head1;
        for(int i = 1; i < v1.size(); i++) {
            p1->next = new ListNode(v1[i]);
            p1 = p1->next;
        }
        return head1;

        
    }
};
// @lc code=end

