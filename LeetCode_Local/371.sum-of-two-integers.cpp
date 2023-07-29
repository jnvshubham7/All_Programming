/*
 * @lc app=leetcode id=371 lang=cpp
 *
 * [371] Sum of Two Integers
 */

// @lc code=start
class Solution {
public:
    int getSum(int a, int b) {

        int c=a^b;
        int d=a&b;
        cout<<c<<" "<<d<<endl;
        cout<<(d<<1)<<endl;
        if(d==0) return c;
        return getSum(c,d<<1);
        
        
    }
};
// @lc code=end

