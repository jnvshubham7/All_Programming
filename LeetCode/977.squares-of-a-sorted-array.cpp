/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

         vector<int> res(nums.size());
//         two pointer taken for sorting
        int left=0,right=nums.size()-1;
//         start from the last 
        for(int i =nums.size()-1;i>=0;i--){
//             used abs because we know array is sorted to all negative numbers will be on the left
            if(abs(nums[left])>nums[right]){
                res[i]=nums[left]*nums[left];
                left++;
            }
//             else we add the last element
            else{
                res[i]=nums[right]*nums[right];
                right--;
            }
        }
        return res;
        
    }
};
// @lc code=end

