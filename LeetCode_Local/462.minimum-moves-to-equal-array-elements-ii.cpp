/*
 * @lc app=leetcode id=462 lang=cpp
 *
 * [462] Minimum Moves to Equal Array Elements II
 */

// @lc code=start
class Solution {
public:
    int minMoves2(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int n=nums.size();
        int target=nums[n/2];

        int b[n];

        for(int i=0;i<n;i++){

            b[i]=abs(target-nums[i]);

        }

        int sum=0;

        for(int i=0;i<n;i++){

            sum+=b[i];


        }

        return sum;
        
    }
};
// @lc code=end

