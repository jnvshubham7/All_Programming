/*
 * @lc app=leetcode id=143 lang=cpp
 *
 * [143] Reorder List
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
    void reorderList(ListNode* head) {

        vector<int> v;
        ListNode* p = head;
        while(p != nullptr) {
            v.push_back(p->val);
            p = p->next;
        }

        //reorder the list L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
        int i = 0, j = v.size() - 1;
        p = head;
        while(i < j) {
            p->val = v[i];
            p = p->next;
            i++;
            p->val = v[j];
            p = p->next;
            j--;
        }
        if(i == j) {
            p->val = v[i];
        }

        
        
    }
};
// @lc code=end

