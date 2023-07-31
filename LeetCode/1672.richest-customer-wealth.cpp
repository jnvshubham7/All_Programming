/*
 * @lc app=leetcode id=1672 lang=cpp
 *
 * [1672] Richest Customer Wealth
 */

// @lc code=start
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int max=0;

        int sum=0;
        int n=accounts.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<accounts[i].size();j++){
                sum=sum+accounts[i][j];
            }
            if(sum>max){
                max=sum;
            }
            sum=0;
        }
        return max;
        
    }
};
// @lc code=end

