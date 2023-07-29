/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int n=nums.size();
        
        int cnt=0;
        int ans=0;

        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                cnt++;
            }
            else
            {
                ans=max(ans,cnt);
                cnt=0;
            }
        }

        ans=max(ans,cnt);

        return ans;


        
    }
};
// @lc code=end

