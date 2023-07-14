/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {

        int s=0, e=nums.size()-1, mid;

        while(s<=e)
        {
            mid=(s+e)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                s=mid+1;
            else
                e=mid-1;
        }

        return -1;


        
    }
};
// @lc code=end

