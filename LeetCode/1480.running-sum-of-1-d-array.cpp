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
        vector<int> ans(n);

        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                ans[i]=nums[i];
            }
            else
            {
                ans[i]=ans[i-1]+nums[i];
            }
        }

        return ans;

       



       
        
    }
};
// @lc code=end

