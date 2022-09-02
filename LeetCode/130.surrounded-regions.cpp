/*
 * @lc app=leetcode id=130 lang=cpp
 *
 * [130] Surrounded Regions
 */

// @lc code=start
class Solution {
public:
   


   void DFS(vector<vector<char>>& board, int i, int j, int m, int n) {
        if(i<0 or j<0 or i>=m or j>=n or board[i][j] != 'O') return;
        board[i][j] = '#';
        DFS(board, i-1, j, m, n);
        DFS(board, i+1, j, m, n);
        DFS(board, i, j-1, m, n);
        DFS(board, i, j+1, m, n);
    }

   
    void solve(vector<vector<char>>& board) {
      
    
        
      
     int m = board.size();
        
      if(m == 0) return;  
        
     int n = board[0].size();
     
    
     for(int i=0; i<m; i++) {

        for(int j=0;j<n;j++) {
            
            if(board[i][j] == 'O' && (i==0 || i==m-1 || j==0 || j==n-1)) {
                
                DFS(board, i, j, m, n);
            }
        }
       
     }
        
        
    
        
     for(int i=0; i<m; i++)
         for(int j=0; j<n; j++)
         {
             if(board[i][j] == 'O')
                 board[i][j] = 'X';
             if(board[i][j] == '#')
                 board[i][j] = 'O';
         }
    }


};
// @lc code=end

