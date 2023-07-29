/*
 * @lc app=leetcode id=1010 lang=cpp
 *
 * [1010] Pairs of Songs With Total Durations Divisible by 60
 */

// @lc code=start
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {

        int count=0;
        for(int i=0;i<time.size();i++)
        {
            for(int j=i+1;j<time.size();j++)
            {
                if((time[i]+time[j])%60==0)
                count++;
            }
        }
        return count;
        
    }
};
// @lc code=end

