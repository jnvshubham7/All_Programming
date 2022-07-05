/*
 * @lc app=leetcode id=240 lang=cpp
 *
 * [240] Search a 2D Matrix II
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n = matrix.size();
        int m=matrix[0].size();

        int i=0,j=m-1;
        while(i>=0 && i<n && j>=0 && j<m){
            if(matrix[i][j]==target) return true;
            else if(matrix[i][j]>target) j--;
           else if(matrix[i][j]<target) i++;
        }
        return false;











        // for(int i=0;i<n;i++)
        // {
        //     vector<int> v=matrix[i];
        //     if(binary_search(v.begin(),v.end(),target))
           
        //         return true;
                
                


        // }
        // return false;
        
    }
};
// @lc code=end

