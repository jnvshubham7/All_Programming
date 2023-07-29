/*
 * @lc app=leetcode id=2058 lang=cpp
 *
 * [2058] Find the Minimum and Maximum Number of Nodes Between Critical Points
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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        if(head == nullptr)
            return {};

        vector<int> res;

        vector<int> v;
        ListNode* cur = head;
        while(cur != nullptr)
        {
            v.push_back(cur->val);
            cur = cur->next;
        }

        if(v.size()<3)
            return {-1,-1};
        
        vector<int> pos;

        for(int i = 1; i < v.size()-1; i++)
        {
           if((v[i]>v[i-1] && v[i]>v[i+1]) || (v[i]<v[i-1] && v[i]<v[i+1]))
           {
               pos.push_back(i);
           }
          
        }



        //print pos
        for(int i = 0; i < pos.size(); i++)
        {
            //cout << pos[i] << " ";
        }

        sort(pos.begin(), pos.end());

        int n= pos.size();
       // cout<<n<<endl;

        if(n==0 || n==1)
        {
            return {-1,-1};
        }

        vector<int> res1;

      

        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         res1.push_back(pos[j]-pos[i]);
        //     }
        // }

        sort(res1.begin(), res1.end());

        //print res1
        // for(int i = 0; i < res1.size(); i++)
        // {
        //     cout << res1[i] << " ";
        // }

        res.push_back(res1[0]);
        res.push_back(res1[res1.size()-1]);


       sort(res.begin(), res.end());



        return res;
        
    }
};
// @lc code=end

