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
        int min_index=-1,max_index=-1;

        int left=0,right=n-1;

        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]==target){
                min_index=mid;
                right=mid-1;
            }
            else if(nums[mid]<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }


        left=0,right=n-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]==target){
                max_index=mid;
                left=mid+1;
            }
            else if(nums[mid]<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }

        return {min_index,max_index};

        

       
        
    }
};
// @lc code=end







class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
int n = nums.size();
    int startIndex = -1;
    int endIndex = -1;

    // Find the starting position of the target
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            startIndex = i;
            break;
        }
    }

    // Find the ending position of the target
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] == target) {
            endIndex = i;
            break;
        }
    }

    return {startIndex, endIndex};
        

       
        
    }
};
































// int n = nums.size();
//         vector<int> res(2, -1);
//         if (n == 0) return res;
//         if (n == 1) {
//             if (nums[0] == target) {
//                 res[0] = 0;
//                 res[1] = 0;
//                 return res;
//             } else {
//                 return res;
//             }
//         }
//         int left = 0, right = n - 1;
//         while (left < right) {
//             int mid = left + (right - left) / 2;
//             if (nums[mid] < target) {
//                 left = mid + 1;
//             } else {
//                 right = mid;
//             }
//         }
//         if (nums[left] != target) return res;
//         res[0] = left;
//         right = n - 1;
//         while (left < right) {
//             int mid = left + (right - left + 1) / 2;
//             if (nums[mid] > target) {
//                 right = mid - 1;
//             } else {
//                 left = mid;
//             }
//         }
//         res[1] = right;
//         return res;




















//   int n=nums.size();
//         if(n==0) return {-1,-1};
//         int first_ele=-1;
//         int last_ele=-1;

//         int i=0;
//         int j=n-1;
//         while(i<=j)
//         {
//             int mid=i+(j-i)/2;
//             if(nums[mid]==target)
//             {
//                 first_ele=mid;
//                j=mid-1;
//             }
//             else if(nums[mid]>target)
//             {
//                 j=mid-1;
//             }
//             else
//             {
//                 i=mid+1;
//             }
//         }

//         i=0;
//         j=n-1;
//         while(i<=j)
//         {
//             int mid=i+(j-i)/2;
//             if(nums[mid]==target)
//             {
//                 last_ele=mid;
//                i=mid+1;
//             }
//             else if(nums[mid]>target)
//             {
//                 j=mid-1;
//             }
//             else
//             {
//                 i=mid+1;
//             }
//         }
//         return {first_ele,last_ele};