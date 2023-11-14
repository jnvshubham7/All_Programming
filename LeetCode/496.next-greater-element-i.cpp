/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int n1=nums1.size(), n2=nums2.size();

        vector<int> ans(n1, -1);

        stack<int> st;

        unordered_map<int,int> mp;

        for(int i=0;i<n2;i++){

            while(!st.empty() && nums2[i]>st.top()){
                mp[st.top()]=nums2[i];
                st.pop();
            }

            st.push(nums2[i]);
        }

        for(int i=0;i<n1;i++){
            if(mp.find(nums1[i])!=mp.end()){
                ans[i]=mp[nums1[i]];
            }
        }

        return ans;

        

    }
};

// time complexity: O(n)
// space complexity: O(n)
// @lc code=end

