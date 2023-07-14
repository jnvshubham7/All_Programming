/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();
        if (n == 0) {
            return 0;
        }
        
        int maxProfit = 0;
        int minPrice = prices[0];
        
        for (int i = 1; i < n; i++) {
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }
        
        return maxProfit;
       
        
    }
};
// @lc code=end































//  int n=prices.size();
//         if(n==0)
//             return 0;


//             //prices = [7,1,5,3,6,4]
//         int ans=0;
//         int min=prices[0];
//         for(int i=1;i<n;i++){
//             if(prices[i]<min){
//                 min=prices[i];
//             }
//             else{
//                 if(prices[i]-min>ans){
//                     ans=prices[i]-min;
//                 }
//             }   
//         }
//         return ans;