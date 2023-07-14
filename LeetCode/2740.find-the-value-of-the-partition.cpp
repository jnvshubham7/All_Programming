/*
 * @lc app=leetcode id=2740 lang=cpp
 *
 * [2740] Find the Value of the Partition
 */

// @lc code=start
class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {

        if(nums.size()==1)
        {
            return nums[0];
        }

        int n=nums.size();

        sort(nums.begin(),nums.end());

        vector<int> diff(n-1);

        for(int i=0;i<n-1;i++)
        {
            diff[i]=nums[i+1]-nums[i];
        }

        int ans=INT_MAX;

        for(int i=0;i<n-1;i++)
        {
            ans=min(ans,diff[i]);
        }

        return ans;


        
    }
};
// @lc code=end

