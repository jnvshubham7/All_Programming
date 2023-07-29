/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {

        //use bit manipulation

        // int n=nums.size();

        // int ans=0;

        

        int n=nums.size();

        sort(nums.begin(),nums.end());
        

        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i)
            {
                return i;
            }
        }

        return n;
        
    }
};
// @lc code=end

