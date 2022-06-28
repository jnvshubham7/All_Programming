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

        unordered_map<int, int> m;
        ListNode* p = head;
        while(p != nullptr) {
            m[p->val]++;
            p = p->next;
        }

        vector<int> v;
       
       for(auto it: m)
       {

        if(it.second==1)
        {
            v.push_back(it.first);
        }
       
      

       }

        sort(v.begin(),v.end());

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




      




        //  vector<int> v;
        // ListNode* curr = head;
        // while(curr != nullptr) {
        //     v.push_back(curr->val);
        //     curr = curr->next;
        // }


        // //store frequency of each element in a map


        // //sort the vector
        // sort(v.begin(), v.end());
        // unordered_map<int, int> m;
        // for(int i = 0; i < v.size(); i++) {
        //     m[v[i]]++;
        // }

        // //create a new list which have 1 frequency element
        // ListNode* head2 = nullptr;
        // ListNode* curr2 = nullptr;
        // for(int i = 0; i < v.size(); i++) {
        //     if(m[v[i]] == 1) {
        //         if(head2 == nullptr) {
        //             head2 = new ListNode(v[i]);
        //             curr2 = head2;
        //         } else {
        //             curr2->next = new ListNode(v[i]);
        //             curr2 = curr2->next;
        //         }
        //     }
        // }

        // return head2;
        
    }
};
// @lc code=end

