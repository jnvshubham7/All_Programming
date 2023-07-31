/*
 * @lc app=leetcode id=300 lang=cpp
 *
 * [300] Longest Increasing Subsequence
 */

// @lc code=start
class Solution {
public:
    int memo[2501][2501];
    int lengthOfLIS(vector<int>& nums) {

        int n=nums.size();

       
        memset(memo,-1,sizeof(memo));

      

        return LIS(nums,-1,0);

       
    }

    int LIS(vector<int>& nums,int prev,int curr)
    {
        if(curr==nums.size())
        {
            return 0;
        }

        if(memo[prev+1][curr]!=-1)
        {
            return memo[prev+1][curr];
        }

        int taken=0;
        if(prev<0 || nums[curr]>nums[prev])
        {
            taken=1+LIS(nums,curr,curr+1);
        }

        int not_taken=LIS(nums,prev,curr+1);

        memo[prev+1][curr]=max(taken,not_taken);

        return memo[prev+1][curr];
    }

  
   
};
// @lc code=end

