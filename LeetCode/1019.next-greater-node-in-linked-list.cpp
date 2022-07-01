/*
 * @lc app=leetcode id=1019 lang=cpp
 *
 * [1019] Next Greater Node In Linked List
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
    vector<int> nextLargerNodes(ListNode* head) {


        vector<int> v;
        ListNode* p = head;
        while(p)
        {
            v.push_back(p->val);
            p = p->next;
        }

        int n = v.size();

        vector<int> res;
        stack<int> s;
        for(int i=n-1;i>=0;i--)
        {
           if(s.empty())
           {
              
               res.push_back(0);
           }

           else if(s.size()>0 && v[i]<s.top())
           {
            res.push_back(s.top());
           }


           else
           {
               while(!s.empty() && v[i] >= s.top())
               {
                   
                   s.pop();
               }
                if(s.empty())
                {
                     res.push_back(0);
                }
                else
                {
                     res.push_back(s.top());
                }

           }

           s.push(v[i]);

        }

        reverse(res.begin(),res.end());

        return res;
        
    }
};
// @lc code=end

