/*
 * @lc app=leetcode id=23 lang=cpp
 *
 * [23] Merge k Sorted Lists
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        vector<int> v;
        for(int i = 0; i < lists.size(); i++) {
            ListNode* p = lists[i];
            while(p != nullptr) {
                v.push_back(p->val);
                p = p->next;
            }
        }
        sort(v.begin(), v.end());
        if(v.size()==0)
        {
            return nullptr;
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

