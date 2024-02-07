/*
 * @lc app=leetcode id=930 lang=cpp
 *
 * [930] Binary Subarrays With Sum
 */

// @lc code=start
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

         int n = nums.size();
        unordered_map<int, int> prefixSumCount;
        int sum = 0, count = 0;

        for (int i = 0; i < n; ++i) {
            sum += nums[i];
            
            if (sum == goal) {
                // If the current sum is equal to the goal, increment count
                count++;
            }

            if (prefixSumCount.find(sum - goal) != prefixSumCount.end()) {
                // If there exists a prefix sum such that (current sum - goal) is equal to it,
                // then add the count of that prefix sum to the total count
                count += prefixSumCount[sum - goal];
            }

            // Increment the count of the current prefix sum in the map
            prefixSumCount[sum]++;
        }

        return count;

        // int n=nums.size();
        // int l=0,r=0,cnt=0;
        // int sum=0;

        // while(r<n)
        // {
        //     sum+=nums[r];

        //     if(sum==k)
        //     {
        //         cnt+=n-r;
        //     }

        //     while(sum>k)
        //     {
        //         sum-=nums[l];
        //         l++;
        //     }

        //     r++;


        // }

        // return cnt ;


        
    }
};
// @lc code=end

