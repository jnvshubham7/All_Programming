/*
 * @lc app=leetcode id=2220 lang=cpp
 *
 * [2220] Minimum Bit Flips to Convert Number
 */

// @lc code=start
class Solution {
public:
    int minBitFlips(int start, int goal) {

        //xor the start and goal
        int xor_res=start^goal;

        cout<<xor_res<<endl;

        //count the number of 1 in xor_res

        int cnt=0;
        while(xor_res)
        {
            if(xor_res&1)
            {
                cnt++;
            }
           xor_res=xor_res>>1;
        }

        return cnt;






        
    }
};
// @lc code=end

