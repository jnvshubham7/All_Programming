/*
 * @lc app=leetcode id=646 lang=cpp
 *
 * [646] Maximum Length of Pair Chain
 */

// @lc code=start
class Solution {
public:
    int findLongestChain(vector<vector<int>>& v) {

        int n = v.size();
    

        int cnt=2;


        for(int i=1;i<n-1;i++)
        {
            if(v[i][0]>=v[i-1][1] && v[i][1]<v[i+1][0] || v[i][0]>v[i-1][1] && v[i][1]<=v[i+1][0])
            {
                cnt++;
            }

            // else if()

            

        }

        return cnt;
        
    }
};
// @lc code=end

