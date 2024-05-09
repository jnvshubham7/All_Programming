/*
 * @lc app=leetcode id=1877 lang=cpp
 *
 * [1877] Minimize Maximum Pair Sum in Array
 */

// @lc code=start
class Solution {
public:
    int minPairSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        int n=nums.size();

        int ans=INT_MIN;

        for(int i=0;i<n/2;i++){
            ans=max(ans,nums[i]+nums[n-i-1]);
        }
        

        return ans;


        
    }
};
// @lc code=end

