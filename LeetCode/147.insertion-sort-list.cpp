/*
 * @lc app=leetcode id=147 lang=cpp
 *
 * [147] Insertion Sort List
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
    ListNode* insertionSortList(ListNode* head) {

        if(head==NULL)
        {
            return NULL;
        }
        vector<int>v;
        ListNode* curr=head;
        while(curr!=NULL)
        {
            v.push_back(curr->val);
            curr=curr->next;
        }
        sort(v.begin(),v.end());
        ListNode* ans=new ListNode(v[0]);
        ListNode* curr2=ans;
        for(int i=1;i<v.size();i++)
        {
            curr2->next=new ListNode(v[i]);
            curr2=curr2->next;
        }
        return ans;
        
    }
};
// @lc code=end

