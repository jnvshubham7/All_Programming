/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> mp;

        stack<int> st;

        int n1=nums1.size();
        int n2=nums2.size();

     for(int i=n2-1;i>=0;i--)
     {
         while(!st.empty() && st.top()<=nums2[i])
         {
             st.pop();
         }

         if(st.empty())
         {
             mp[nums2[i]]=-1;
         }
         else
         {
             mp[nums2[i]]=st.top();
         }

         st.push(nums2[i]);
     }

        vector<int> ans;

        for(int i=0;i<n1;i++)
        {
            ans.push_back(mp[nums1[i]]);
        }

        return ans;

        

    }
};

// time complexity: O(n)
// space complexity: O(n)
// @lc code=end

