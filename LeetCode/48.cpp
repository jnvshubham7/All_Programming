class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        //rotate the matrix by 90 degree clockwise
        //first transpose the matrix
        //then reverse the matrix

        //code here
        int n=matrix.size();

        //rotate the matrix by 90 degree clockwise





        //given matrix is a n*n matrix and we need to rotate it by 90 degree clockwise
        //first transpose the matrix


        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        








        
    }
};