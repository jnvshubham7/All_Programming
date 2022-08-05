/*
 * @lc app=leetcode id=1342 lang=cpp
 *
 * [1342] Number of Steps to Reduce a Number to Zero
 */

// @lc code=start
class Solution {
public:
    int numberOfSteps(int num) {

        cout<<(num & 1)<<endl;

        int cnt=0;
        while(num)
        {
            if(num & 1)
            {
                num=num-1;
            }
            else
            {
                num=num>>1;
            }
            cnt++;
        }
        return cnt;


        
    }
};
// @lc code=end

