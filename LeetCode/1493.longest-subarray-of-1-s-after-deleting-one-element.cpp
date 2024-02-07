/*
 * @lc app=leetcode id=1493 lang=cpp
 *
 * [1493] Longest Subarray of 1's After Deleting One Element
 */

// @lc code=start
class Solution {
public:
    int longestSubarray(vector<int>& nums) {

         int n=nums.size();
        int L=0, R=0, max_len=0, zero_cnt=0;

        while(R<n)
        {
            if(nums[R]==0)
            {
                zero_cnt++;

            }

            while(zero_cnt>1)
            {
                if(nums[L]==0)
                {
                    zero_cnt--;
                }
                L++;
            }

            max_len= max(max_len, R-L+1);
            R++;

        }

        return max_len-1;
        
    }
};
// @lc code=end

