/*
 * @lc app=leetcode id=79 lang=cpp
 *
 * [79] Word Search
 */

// @lc code=start
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {

        int n = board.size();
        int m = board[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==word[0])
                {
                    if(dfs(board, word, i, j, 0, vis))
                        return true;
                }
            }
        }
        return false;

        
        
    }

    bool dfs(vector<vector<char>>& board, string word, int i, int j, int idx, vector<vector<bool>>& vis)
    {
        if(idx==word.size())
            return true;
        
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || vis[i][j] || board[i][j]!=word[idx])
            return false;
        
        vis[i][j] = true;

       bool x1 = dfs(board, word, i+1, j, idx+1, vis);
         bool x2 = dfs(board, word, i-1, j, idx+1, vis);
            bool x3 = dfs(board, word, i, j+1, idx+1, vis);
                bool x4 = dfs(board, word, i, j-1, idx+1, vis);

        bool ans = x1 || x2 || x3 || x4;


        vis[i][j] = false;
        return ans;
    }


};
// @lc code=end
