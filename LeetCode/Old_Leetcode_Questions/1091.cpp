class Solution {
public:
    bool isValid(int r,int c,vector<vector<int>>& grid,int m,int n)
    {
        if(r>=0 && c>=0 && r<=m && c<=n && grid[r][c]==0)
        {
            return true;
        }
        return false;
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        if(grid[0][0]==1)
        {
            return -1;
        }
    vector<vector<int>> dirs = {{-1,-1},    {-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0}, {1,1}
        };
     queue<pair<int,int>>q;
        q.push({0,0});
        grid[0][0]=1;
        int ans=0;
        int m=grid.size()-1;
        int n=grid[0].size()-1;
        while(!q.empty())
        {
            int ls=q.size();
            ans++;
            
            for(int i=0;i<ls;i++)
            {
                pair<int,int>p=q.front();
                q.pop();
                if(p.first==m && p.second==n)
                {
                  return ans;  
                }
                for(int j=0;j<dirs.size();j++){
                int r=p.first+dirs[j][0];
                int c=p.second+dirs[j][1];
                if(isValid(r,c,grid,m,n))
                {
                    q.push({r,c});
                    grid[r][c]=1;
                }    
                }
                
            }
        }
        return -1;
    }
};

























// class Solution {
// public:
//     int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
//         // int n = grid.size();
//         // if (n == 0) return 0;
//         // if (grid[0][0] == 1 || grid[n - 1][n - 1] == 1) return -1;
//         // int m = grid[0].size();
//         // if (m == 0) return 0;
//         // if (grid[n - 1][0] == 1 || grid[0][m - 1] == 1) return -1;
//         // int ans = 0;
//         // queue<pair<int, int>> q;
//         // q.push({0, 0});
//         // grid[0][0] = 1;
//         // while (!q.empty()) {
//         //     int size = q.size();
//         //     for (int i = 0; i < size; i++) {
//         //         int x = q.front().first;
//         //         int y = q.front().second;
//         //         q.pop();
//         //         if (x == n - 1 && y == m - 1) return ans;
//         //         if (x + 1 < n && grid[x + 1][y] == 0) {
//         //             q.push({x + 1, y});
//         //             grid[x + 1][y] = 1;
//         //         }
//         //         if (y + 1 < m && grid[x][y + 1] == 0) {
//         //             q.push({x, y + 1});
//         //             grid[x][y + 1] = 1;
//         //         }
//         //         if (x - 1 >= 0 && grid[x - 1][y] == 0) {
//         //             q.push({x - 1, y});
//         //             grid[x - 1][y] = 1;
//         //         }
//         //         if (y - 1 >= 0 && grid[x][y - 1] == 0) {
//         //             q.push({x, y - 1});
//         //             grid[x][y - 1] = 1;
//         //         }
//         //     }
//         //     ans++;
//         // }
//         // return -1;
        
//     }
// };