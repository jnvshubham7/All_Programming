/*
 * @lc app=leetcode id=762 lang=cpp
 *
 * [762] Prime Number of Set Bits in Binary Representation
 */

// @lc code=start
class Solution {
public:
    int countPrimeSetBits(int left, int right) {

        int prime_cnt=0;
        for(int i=left;i<=right;i++)
        {
            int cnt=0;
            int x=i;
            while(x)
            {
                if(x&1)
                {
                    cnt++;
                }
                x=x>>1;
            }
            if(isPrime(cnt))
            {
                prime_cnt++;
            }
        }
        return prime_cnt;
        
    }

    bool isPrime(int x)
    {
        if(x==1)
        {
            return false;
        }
        for(int i=2;i<=x/2;i++)
        {
            if(x%i==0)
            {
                return false;
            }
        }
        return true;
       
    }
};
// @lc code=end

