/*
 * @lc app=leetcode id=1480 lang=cpp
 *
 * [1480] Running Sum of 1d Array
 */

// @lc code=start
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        int n=nums.size();
        vector<int> v;
        int sum=nums[0];
        v.push_back(nums[0]);

        for(int i=1;i<n;i++)
        {
            sum+=nums[i];
            v.push_back(sum);
        }
        return v;



       
        
    }
};
// @lc code=end

