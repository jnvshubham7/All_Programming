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

        vector<int> prefix_sum(n,0);

        for(int i=0;i<n;i++)
        {

            if(i==0)
            {
                prefix_sum[i]=nums[i];
            }
            else
            {
                prefix_sum[i]=prefix_sum[i-1]+nums[i];
            }




        }

        return prefix_sum;
        
    }
};
// @lc code=end

