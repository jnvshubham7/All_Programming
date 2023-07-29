/*
 * @lc app=leetcode id=476 lang=cpp
 *
 * [476] Number Complement
 */

// @lc code=start
class Solution {
public:
    int findComplement(int num) {

         unordered_map<long, long> m;
       long i = 0;
        while (num)
        {
            m[i] = num % 2;
            num = num / 2;
            i++;
        }
        //convert 0 to 1 and 1 to 0
        for (auto it = m.begin(); it != m.end(); it++)
        {
            if (it->second == 0)
            {
                it->second = 1;
            }
            else
            {
                it->second = 0;
            }
        }
   //convert map to int
        long ans = 0;
        for (auto it = m.begin(); it != m.end(); it++)
        {
            ans = ans * 2 + it->second;
        }
        return ans;
        
    }
};
// @lc code=end

