/*
 * @lc app=leetcode id=1732 lang=cpp
 *
 * [1732] Find the Highest Altitude
 */

// @lc code=start
class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int n=gain.size();
        vector<int> v(n+1);   
        v[0]=0;

        for(int i=1;i<=n;i++)
        {
            v[i]=v[i-1]+gain[i-1];
        }

        return *max_element(v.begin(),v.end());     
    }
};
// @lc code=end

