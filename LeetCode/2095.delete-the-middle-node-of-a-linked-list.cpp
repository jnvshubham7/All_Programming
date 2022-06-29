/*
 * @lc app=leetcode id=2095 lang=cpp
 *
 * [2095] Delete the Middle Node of a Linked List
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
    ListNode* deleteMiddle(ListNode* head) {
       if(head == nullptr || head->next == nullptr)
           return nullptr;

        vector<int> v;
        ListNode* cur = head;
        while(cur != nullptr)
        {
            v.push_back(cur->val);
            cur = cur->next;
        }

        int mid = v.size() / 2;
       
            v.erase(v.begin() + mid);
        
       

        ListNode* newHead = new ListNode(v[0]);
        ListNode* cur2 = newHead;
        for(int i = 1; i < v.size(); i++)
        {
            cur2->next = new ListNode(v[i]);
            cur2 = cur2->next;
        }

        return newHead;
        
    }
};
// @lc code=end

