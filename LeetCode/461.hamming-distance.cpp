/*
 * @lc app=leetcode id=461 lang=cpp
 *
 * [461] Hamming Distance
 */

// @lc code=start
class Solution {
public:
    int hammingDistance(int x, int y) {

       int z=x^y;
       int cnt=0;

       while(z)
       {
        if(z&1)
        {
            cnt++;
        }
       z=z>>1;
       }

         return cnt;

        
    }
};
// @lc code=end


