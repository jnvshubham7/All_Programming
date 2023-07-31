/*
 * @lc app=leetcode id=1049 lang=cpp
 *
 * [1049] Last Stone Weight II
 */

// @lc code=start
class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {

        sort(stones.begin(), stones.end());

        int sum = 0;

        for (int i = 0; i < stones.size(); i++)
        {
            sum += stones[i];
        }

        int target = sum / 2;

      recursive(stones, target, 0, 0);

        return target;
        
    }

    void recursive(vector<int>& stones, int target, int sum, int index)
    {
        if (sum == target)
        {
            return;
        }

        if (sum > target)
        {
            return;
        }

        for (int i = index; i < stones.size(); i++)
        {
            sum += stones[i];

            recursive(stones, target, sum, i + 1);

            sum -= stones[i];
        }
    }
};
// @lc code=end

