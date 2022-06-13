/*
 * @lc app=leetcode id=561 lang=cpp
 *
 * [561] Array Partition I
 */

// @lc code=start
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i+=2)
        {
            sum+=nums[i];
        }
        return sum;
        
    }
};
// @lc code=end

