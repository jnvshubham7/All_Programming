/*
 * @lc app=leetcode id=1680 lang=cpp
 *
 * [1680] Concatenation of Consecutive Binary Numbers
 */

// @lc code=start
class Solution {
public:
    int concatenatedBinary(int n) {



        int mod = 1e9 + 7;
        long long ans = 0;
        
        for (int i = 1; i <= n; i++) {
            int len = 0;
            int tmp = i;
            len = log2(tmp) + 1;
            ans = ((ans << len) + i) % mod;
        }
        

        return ans;

        
        
    }



};
// @lc code=end

