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

       vector<int> row_ind;
         vector<int> col_ind;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    row_ind.push_back(i);
                    col_ind.push_back(j);


                   
                }
            }
        }

        //print row_ind
        for(int i=0;i<row_ind.size();i++){
            cout<<row_ind[i]<<" ";
        }
        cout<<endl;

        //print col_ind
        for(int i=0;i<col_ind.size();i++){
            cout<<col_ind[i]<<" ";
        }

        cout<<endl;


        for(int i=0;i<row_ind.size();i++){
            for(int j=0;j<m;j++){
                matrix[row_ind[i]][j]=0;
            }
        }

        for(int i=0;i<col_ind.size();i++){
            for(int j=0;j<n;j++){
                matrix[j][col_ind[i]]=0;
            }
        }






        
    }
};
// @lc code=end

