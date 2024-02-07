class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& mt) {
        int n = mt.size();
        int m = mt[0].size();

        vector<vector<int>> memo(n, vector<int> (m, -1));


        return rec(0, 0, mt, memo);
    }

    int rec(int i, int j, vector<vector<int>>& mt, vector<vector<int>>& memo) {
        if (i >= mt.size() || j >= mt[0].size() || mt[i][j] == 1) {
            return 0;
        }

        if(memo[i][j] !=-1)
        {
            return memo[i][j];
        }



        if (i == mt.size() - 1 && j == mt[0].size() - 1) {
            return 1;
        }

        int right = rec(i, j + 1, mt, memo);
        int down = rec(i + 1, j, mt, memo);

        return memo[i][j] = right + down;
    }
};
