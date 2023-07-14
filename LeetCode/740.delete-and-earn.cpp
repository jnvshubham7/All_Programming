/*
 * @lc app=leetcode id=740 lang=cpp
 *
 * [740] Delete and Earn
 */

// @lc code=start
class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {


        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        int dp[10001]={0};

        dp[1]=mp[1];

        for(int i=2;i<=10000;i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+i*mp[i]);
        }

        //print dp array
        for(int i=1;i<=10;i++)
        {
            cout<<dp[i]<<" ";
        }
        

        return dp[10000];

       
        
    }
};
// @lc code=end

