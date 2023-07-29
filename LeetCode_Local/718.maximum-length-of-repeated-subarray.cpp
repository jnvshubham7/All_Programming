/*
 * @lc app=leetcode id=718 lang=cpp
 *
 * [718] Maximum Length of Repeated Subarray
 */

// @lc code=start
class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {

        int n=nums1.size();
        int m=nums2.size();

        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(nums1[i]==nums2[j])
                {
                    dp[i+1][j+1]=dp[i][j]+1;
                }
            }
        }

        int ans=0;
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                ans=max(ans,dp[i][j]);
            }
        }

        return ans;
        

       





    }
};
// @lc code=end

