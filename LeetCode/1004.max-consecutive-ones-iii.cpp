/*
 * @lc app=leetcode id=1004 lang=cpp
 *
 * [1004] Max Consecutive Ones III
 */

// @lc code=start
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int n=nums.size();

        int l=0,r=0,ans=0;
        int zero=0;

        while(r<n)
        {
            if(nums[r]==0)
            {
                zero++;
            }

            while(zero>k)
            {
                if(nums[l]==0)
                {
                    zero--;
                }
                l++;
            }

            ans = max(ans, r-l+1);

            r++;

        }


        return ans;
        
    }
};
// @lc code=end

