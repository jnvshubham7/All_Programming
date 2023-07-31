/*
 * @lc app=leetcode id=328 lang=cpp
 *
 * [328] Odd Even Linked List
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
    ListNode* oddEvenList(ListNode* head) {

        if(head ==NULL)
        {
            return head;
        }

        vector<int> v;
        ListNode* p = head;
        while(p != nullptr) {
            v.push_back(p->val);
            p = p->next;
        }

        vector<int> odd;
        vector<int> even;
        for(int i = 0; i < v.size(); i++) {
            if(i % 2 == 0) {
                odd.push_back(v[i]);
            } else {
                even.push_back(v[i]);
            }
        }

        vector<int> v1;

        for(int i = 0; i < odd.size(); i++) {
            v1.push_back(odd[i]);
        }
        for(int i = 0; i < even.size(); i++) {
            v1.push_back(even[i]);
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

