/*
 * @lc app=leetcode id=377 lang=cpp
 *
 * [377] Combination Sum IV
 */

// @lc code=start
class Solution {
public:


    


    int combinationSum4(vector<int>& nums, int target) {

        vector<int> dp(1001,-1);

        return solve(nums,target,dp);
        
    }

    int solve(vector<int>& nums, int target , vector<int>& dp)
    {



        int n=nums.size();
        if(target<0)
        {
            return 0;

        }

        if(target==0)
        {
            return 1;
        }
        int ans=0;

        if(dp[target]!=-1)
        {
            return dp[target];
        }

        for(int i=0;i<n;i++)
        {

            ans+=solve(nums,target-nums[i],dp);
            
        }
        dp[target]=ans;

        return dp[target];


    }
};
// @lc code=end

