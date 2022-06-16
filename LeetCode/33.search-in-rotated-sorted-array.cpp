/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            return i;
        }

        return -1;

       
        // int min=INT_MAX;

        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]<min)
        //     min=nums[i];
        // }

        // int idx;
        // for(int i=0;i<n;i++)
        // {
        //     if(min==nums[i])
        //     idx=i;
        //     break;
        // }

        // vector<int> v;

        // for(int i=idx;i<n;i++)
        // {
        //     v.push_back(nums[i]);

        // }

        // for(int i=0;i<idx;i++)
        // {
        //     v.push_back(nums[i]);

        // }

        
        // int i=0;
        // int j=n-1;
        // while(i<j)
        // {
        //     int mid=(i+j)/2;
        //     if(nums[mid]==target)
        //     {
        //        // return mid;
        //     }
        //     else if(nums[mid]>target)
        //     {
        //         j--;

        //     }
        //     else{
        //         i++;
        //     }
        // }
        // return -1;
        
    }
};
// @lc code=end

