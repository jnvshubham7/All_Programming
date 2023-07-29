/*
 * @lc app=leetcode id=416 lang=cpp
 *
 * [416] Partition Equal Subset Sum
 */

// @lc code=start
class Solution {
public:
    bool canPartition(vector<int>& nums) {

        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }

        if(sum%2!=0)
        {
            return false;
        }

        sum=sum/2;

        vector<vector<int>> dp(nums.size()+1,vector<int>(sum+1,-1));

        return rec(nums,sum,0,dp);
        
        
    }

    bool rec(vector<int>& nums,int sum,int i,vector<vector<int>> &dp)
    {
        if(sum==0)
        {
            return true;
        }

        if(dp[i][sum]!=-1)
        {
            return dp[i][sum];
        }

        if(i>=nums.size())
        {
            return false;
        }

        if(nums[i]<=sum)
        {
            return dp[i][sum]=rec(nums,sum-nums[i],i+1,dp) || rec(nums,sum,i+1,dp);
        }
        else
        {
            return dp[i][sum]=rec(nums,sum,i+1,dp);
        }
        
    }
};
// @lc code=end

