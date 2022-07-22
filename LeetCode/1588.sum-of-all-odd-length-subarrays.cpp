/*
 * @lc app=leetcode id=1588 lang=cpp
 *
 * [1588] Sum of All Odd Length Subarrays
 */

// @lc code=start
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {

        int n=arr.size();
        int sum=0;
        int prefix_sum[n];
        prefix_sum[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            prefix_sum[i]=prefix_sum[i-1]+arr[i];
        }
       

        
    }
};
// @lc code=end

