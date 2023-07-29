/*
 * @lc app=leetcode id=2201 lang=cpp
 *
 * [2201] Count Artifacts That Can Be Extracted
 */

// @lc code=start
class Solution {
public:
    int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig) {

         int count = 0;

        int flag=0;
        for(int i = 0; i < artifacts.size(); i++)
        {
            int r1 = artifacts[i][0];
            int c1 = artifacts[i][1];
            int r2 = artifacts[i][2];
            int c2 = artifacts[i][3];
            for(int j = 0; j < dig.size(); j++)
            {
                int r3 = dig[j][0];
                int c3 = dig[j][1];
                if(r3 >= r1 && r3 <= r2 && c3 >= c1 && c3 <= c2)
                {
                    count++;
                    flag=1;
                }
            }
        }
      //  return count;

if(flag==0)
return 2;
else
return 1;
        
    }
};
// @lc code=end

