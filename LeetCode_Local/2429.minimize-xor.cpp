/*
 * @lc app=leetcode id=2429 lang=cpp
 *
 * [2429] Minimize XOR
 */

// @lc code=start
class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int ans=0;
        bitset<32> b1,b2;
        b1=num1;
        b2=num2;
        int k1=b1.count();
        int k2=b2.count();
        for(int i=31;i>=0;i--){
            if(k2==0)
            {
                break;
            }
            if(b1[i]==1){
                ans+=pow(2,i);
                k2--;
            }
        }
        if(k2>0)
        {
            for(int i=0;i<32;i++)
            {
                if(k2==0)
                {
                    break;
                }
                if(b1[i]==0)
                {
                    ans+=pow(2,i);
                    k2--;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

