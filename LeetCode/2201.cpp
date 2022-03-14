class Solution {
public:
    int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig) {
//         There is an n x n 0-indexed grid with some artifacts buried in it. You are given the integer n and a 0-indexed 2D integer array artifacts describing the positions of the rectangular artifacts where artifacts[i] = [r1i, c1i, r2i, c2i] denotes that the ith artifact is buried in the subgrid where:

// (r1i, c1i) is the coordinate of the top-left cell of the ith artifact and
// (r2i, c2i) is the coordinate of the bottom-right cell of the ith artifact.
// You will excavate some cells of the grid and remove all the mud from them. If the cell has a part of an artifact buried underneath, it will be uncovered. If all the parts of an artifact are uncovered, you can extract it.

// Given a 0-indexed 2D integer array dig where dig[i] = [ri, ci] indicates that you will excavate the cell (ri, ci), return the number of artifacts that you can extract.

// The test cases are generated such that:

// No two artifacts overlap.
// Each artifact only covers at most 4 cells.
// The entries of dig are unique.

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