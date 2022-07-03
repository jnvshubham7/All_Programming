/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int n=nums.size();
        if(n==0) return {-1,-1};
        int first_ele=-1;
        int last_ele=-1;

        int i=0;
        int j=n-1;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(nums[mid]==target)
            {
                first_ele=mid;
               j=mid-1;
            }
            else if(nums[mid]>target)
            {
                j=mid-1;
            }
            else
            {
                i=mid+1;
            }
        }

        i=0;
        j=n-1;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(nums[mid]==target)
            {
                last_ele=mid;
               i=mid+1;
            }
            else if(nums[mid]>target)
            {
                j=mid-1;
            }
            else
            {
                i=mid+1;
            }
        }
        return {first_ele,last_ele};
        
        
    }
};
// @lc code=end

