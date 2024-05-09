/*
 * @lc app=leetcode id=2411 lang=cpp
 *
 * [2411] Smallest Subarrays With Maximum Bitwise OR
 */

// @lc code=start
class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {

        int n = nums.size();

        int i=0, j=0;

        vector<int> ans;

        int maxOr = 0;

        while(j<n) {
           int curr = maxOr | nums[j];

           if(curr>=maxOr) {
               maxOr = curr;
               ans.push_back(j-i+1);
               j++;
           } else {
               i++;
           }




           
        }

        return ans;
        
        
    }
};
// @lc code=end

