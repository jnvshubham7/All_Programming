/*
 * @lc app=leetcode id=2427 lang=cpp
 *
 * [2427] Number of Common Factors
 */

// @lc code=start
class Solution {
public:
    int commonFactors(int a, int b) {
        int cnt=0;
        for(int i=1;i<=min(a,b);i++){
            if(a%i==0 && b%i==0){
                cnt++;
            }
        }
        return cnt;
        
    }
};
// @lc code=end

