/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */

// @lc code=start
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

         int n=matrix.size();
        int m=matrix[0].size();
        
        vector<int> v1;
        
         vector<int> v2;

        for(int i=0;i<n;i++)

        {

            for(int j=0;j<m;j++)

            {

                if(matrix[i][j]==0)

                {

                    v1.push_back(i);

                    v2.push_back(j);

                }

            }

        }

        for(int i=0;i<v1.size();i++)

        {

            for(int j=0;j<m;j++)

            {

                matrix[v1[i]][j]=0;

            }

        }

        for(int i=0;i<v2.size();i++)

        {

            for(int j=0;j<n;j++)

            {

                matrix[j][v2[i]]=0;

            }

        }



        
    }
};
// @lc code=end

