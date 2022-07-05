/*
 * @lc app=leetcode id=779 lang=cpp
 *
 * [779] K-th Symbol in Grammar
 */

// @lc code=start
class Solution {
public:
    int kthGrammar(int n, int k) {

     return  solve(n, k);
        
        
    }

    int solve(int n, int k)
    {
        if(n == 1)
            return 0;
        int mid = pow(2, n-1)/2;
        if(k <= mid)
            return solve(n-1, k);
        else
            return !solve(n-1, k-mid);
    }

    
};
// @lc code=end

