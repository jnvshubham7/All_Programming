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

        int len1 = 0, len2 = 0;
        ListNode* p = l1;
        while(p != nullptr) {
            len1++;
            p = p->next;
        }
        p = l2;
        while(p != nullptr) {
            len2++;
            p = p->next;
        }
        int len = len1 > len2 ? len1 : len2;

        string s1, s2;
        p = l1;
        while(p != nullptr) {
            s1 += to_string(p->val);
            p = p->next;
        }
        p = l2;
        while(p != nullptr) {
            s2 += to_string(p->val);
            p = p->next;
        }
        string s = to_string(stoi(s1) + stoi(s2));
        reverse(s.begin(), s.end());
        ListNode* head = new ListNode(s[0] - '0');
        p = head;
        for(int i = 1; i < s.size(); i++) {
            p->next = new ListNode(s[i] - '0');
            p = p->next;
        }
        return head;


        // string s1 = "";
        // string s2 = "";
        // ListNode* p = l1;
        // while(p != nullptr) {
        //     s1 += to_string(p->val);
        //     p = p->next;
        // }
        // p = l2;
        // while(p != nullptr) {
        //     s2 += to_string(p->val);
        //     p = p->next;
        // }
        // string s = to_string(stoi(s1) + stoi(s2));
        // reverse(s.begin(), s.end());
        // ListNode* head = new ListNode(s[0] - '0');
        // ListNode* p1 = head;
        // for(int i = 1; i < s.size(); i++) {
        //     p1->next = new ListNode(s[i] - '0');
        //     p1 = p1->next;
        // }
        // return head;


        
    }
};
// @lc code=end

