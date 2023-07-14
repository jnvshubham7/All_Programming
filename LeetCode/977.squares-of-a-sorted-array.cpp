/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        vector<int> ans;

        int n = nums.size();

        for(int i=0;i<n;i++){
            ans.push_back(nums[i]*nums[i]);
        }

        sort(ans.begin(),ans.end());

        return ans;

       
        
    }
};
// @lc code=end

