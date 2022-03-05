class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {

 int curr = 0, total = 0;
        for (int i=2; i<nums.size(); i++){
            if (nums[i]-nums[i-1] == nums[i-1]-nums[i-2]) {
                curr += 1;
                total += curr;
            } else {
                curr = 0;
            }
        }
        return total;























//         An integer array is called arithmetic if it consists of at least three elements and if the difference between any two consecutive elements is the same.

// For example, [1,3,5,7,9], [7,7,7,7], and [3,-1,-5,-9] are arithmetic sequences.
// Given an integer array nums, return the number of arithmetic subarrays of nums.

// A subarray is a contiguous subsequence of the array.

// int n=nums.size();
// if(n<3) return 0;


    }




};