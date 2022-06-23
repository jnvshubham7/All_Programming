/*
 * @lc app=leetcode id=215 lang=cpp
 *
 * [215] Kth Largest Element in an Array
 */

// @lc code=start
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        priority_queue<int, vector<int> ,greater<int>> pq;

        for(auto num : nums) {
            pq.push(num);
            if(pq.size()>k)
            {
                pq.pop();
            }

        }

        return pq.top();
      




        

        // sort(nums.begin(), nums.end());
        
        // reverse(nums.begin(), nums.end());

        // return nums[k-1];




        
    }
};
// @lc code=end

