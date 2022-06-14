/*
 * @lc app=leetcode id=82 lang=cpp
 *
 * [82] Remove Duplicates from Sorted List II
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
    ListNode* deleteDuplicates(ListNode* head) {

         vector<int> v;
        ListNode* curr = head;
        while(curr != nullptr) {
            v.push_back(curr->val);
            curr = curr->next;
        }


        //store frequency of each element in a map


        //sort the vector
        sort(v.begin(), v.end());
        unordered_map<int, int> m;
        for(int i = 0; i < v.size(); i++) {
            m[v[i]]++;
        }

        //create a new list which have 1 frequency element
        ListNode* head2 = nullptr;
        ListNode* curr2 = nullptr;
        for(int i = 0; i < v.size(); i++) {
            if(m[v[i]] == 1) {
                if(head2 == nullptr) {
                    head2 = new ListNode(v[i]);
                    curr2 = head2;
                } else {
                    curr2->next = new ListNode(v[i]);
                    curr2 = curr2->next;
                }
            }
        }

        return head2;
        
    }
};
// @lc code=end

