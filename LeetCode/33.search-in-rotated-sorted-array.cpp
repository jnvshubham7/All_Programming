/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
   

   int binarySearch(vector<int>& nums, int target, int start, int end)
   {
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            if(nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return -1;
   }

    int findMin(vector<int>& nums, int target) {
        int n=nums.size();
         int start = 0, end = n-1;
         int min_index = -1;
        if(nums[start] < nums[end])
        {
            binarySearch(nums, target, start, end);
        }
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            int next = (mid+1)%n;
            int prev = (mid + n - 1)%n;
            if(nums[mid] <= nums[next] && nums[mid] <= nums[prev])
            {
                min_index = mid;
                
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
        int left=binarySearch(nums, target, 0, min_index-1);
        int right=binarySearch(nums, target, min_index, n-1);
        if(left == -1)
        {
            return right;
        }
        else if(right == -1)
        {
            return left;
        }
       
       return -1;


        
    }



    int search(vector<int>& nums, int target) {
        

        return findMin(nums, target);
        
    }
};
// @lc code=end

