/*
 * @lc app=leetcode id=1464 lang=cpp
 *
 * [1464] Maximum Product of Two Elements in an Array
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {

         priority_queue<int, vector<int>> pq;
        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
        }

        //pop the first element and the second element
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();

        //return the product of the two elements
        return (first - 1) * (second - 1);
        
    }
};
// @lc code=end

