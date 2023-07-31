/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
         int start = 0, end = n-1;
        if(nums[start] < nums[end])
        {
            return nums[start];
        }
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            int next = (mid+1)%n;
            int prev = (mid + n - 1)%n;
            if(nums[mid] <= nums[next] && nums[mid] <= nums[prev])
            {
                return nums[mid];
            }
            if(nums[mid] <= nums[end])
            {
                end = mid - 1;
            }
            else if(nums[start] <= nums[mid])
            {
                start = mid + 1;
            }
        }
        return -1;
        
    }
};
// @lc code=end

