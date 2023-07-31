/*
 * @lc app=leetcode id=86 lang=cpp
 *
 * [86] Partition List
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
    ListNode* partition(ListNode* head, int x) {

        vector<int> v1, v2;
        ListNode* cur = head;
        while (cur) {
            if (cur->val < x) {
                v1.push_back(cur->val);
            } else {
                v2.push_back(cur->val);
            }
            cur = cur->next;
        }
       //print v1 and v2

    //    for(int i = 0; i < v1.size(); i++) {
    //        cout << v1[i] << " ";
    //    }
    //      cout << endl;
    //         for(int i = 0; i < v2.size(); i++) {
    //         cout << v2[i] << " ";
    //         }
    //         cout << endl;


        ListNode* head1 = new ListNode(0);

        
        ListNode* cur1 = head1;
        for (int i = 0; i < v1.size(); i++) {
            cur1->next = new ListNode(v1[i]);
            cur1 = cur1->next;
        }
        
        for(int i = 0; i < v2.size(); i++) {
            cur1->next = new ListNode(v2[i]);
            cur1 = cur1->next;
        }
        return head1->next;


            


       
        
    }
};
// @lc code=end

