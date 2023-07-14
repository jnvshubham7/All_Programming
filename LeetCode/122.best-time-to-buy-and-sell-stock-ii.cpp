/*
 * @lc app=leetcode id=122 lang=cpp
 *
 * [122] Best Time to Buy and Sell Stock II
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int min = prices[0];
        int max = prices[0];

        int profit = 0;

        // for(int i = 1; i < prices.size(); i++)
        // {
        //     if(prices[i] < max)
        //     {
        //         profit += max - min;
        //         min = prices[i];
        //         max = prices[i];
        //     }
        //     else
        //     {
        //         max = prices[i];
        //     }
        // }

        // profit += max - min;

        // return profit;



        
    }
};
// @lc code=end

