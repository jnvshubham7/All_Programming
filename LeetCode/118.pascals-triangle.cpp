/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        
       
        vector<vector<int>>ans;

        for(int i=0;i<numRows;i++)
        {
            vector<int>temp(i+1,1);

            for(int j=1;j<i;j++)
            {
                temp[j]=ans[i-1][j-1]+ans[i-1][j];
            }

            
            // for(int j=0;j<=i;j++)
            // {
            //     if(j==0 || j==i)
            //     {
            //         temp.push_back(1);
            //     }
            //     else
            //     {
            //         temp.push_back(ans[i-1][j-1]+ans[i-1][j]);
            //     }
            // }
            ans.push_back(temp);
        }
        
      
        return ans;
        

    }
};
// @lc code=end

