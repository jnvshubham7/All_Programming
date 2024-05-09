/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {


        int i=0, j=0;

        int sum = 0;
        int maxSum = INT_MIN;

        while(j<nums.size()){
            sum += nums[j];
            maxSum = max(maxSum, sum);
            if(sum<0){
                sum = 0;
            }
            j++;
        }

        return maxSum;

        




       
        
    }
};
// @lc code=end

