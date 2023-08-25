/*
 * @lc app=leetcode id=81 lang=cpp
 *
 * [81] Search in Rotated Sorted Array II
 */

// @lc code=start
class Solution {
public:
    bool search(vector<int>& nums, int target) {

        int n=nums.size();

        return rec(nums,0,n-1,target);
        
    }

    bool rec(vector<int>& nums,int l,int r,int target)
    {
        if(l>r)
            return false;

        int mid=(l+r)/2;

        if(nums[mid]==target)
            return true;

        // if(nums[l]==nums[mid] && nums[mid]==nums[r])
        //     return rec(nums,l+1,r-1,target);

        if(nums[l]<=nums[mid])
        {
            if(target>=nums[l] && target<=nums[mid])
                return rec(nums,l,mid-1,target);
            else
                return rec(nums,mid+1,r,target);
        }
        else
        {
            if(target>=nums[mid] && target<=nums[r])
                return rec(nums,mid+1,r,target);
            else
                return rec(nums,l,mid-1,target);
        }
    }





};
// @lc code=end

