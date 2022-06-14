class Solution {
public:

        

// int dfs(vector<vector<int>>& grid, vector<int> x, int y, int n, int m)
// {
//     if (x < 0 || x >= n || y < 0 || y >= m || grid[x][y] == 1)
//         return 0;
//     grid[x][y] = 1;
//     int ans = 1;
//     ans += dfs(grid, x - 1, y, n, m);
//     ans += dfs(grid, x + 1, y, n, m);
//     ans += dfs(grid, x, y - 1, n, m);
//     ans += dfs(grid, x, y + 1, n, m);
//     return ans;


// }

//dfs function 
  
vector<vector<int>> ans;

  void dfs(vector<vector<int>>& grid, int x, int y, int n, int m)
    {

        if(x < 0 || x >= n || y < 0 || y >= m || grid[x][y] == 1)
            return;

        grid[x][y] = 1;

        dfs(grid, x - 1, y, n, m);

        dfs(grid, x + 1, y, n, m);

       dfs(grid,x,y-1,n,m);
       dfs (grid,x,y+1,n,m);

    }
    













    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {


        vector<int> parent(n, -1);
        vector<int> rank(n, 0);
        vector<vector<int>> graph(n);
        for (auto& connection : connections) {
            graph[connection[0]].push_back(connection[1]);
            graph[connection[1]].push_back(connection[0]);
        }
        int time = 0;
        int root = 0;

        dfs(graph, parent, rank, time, root);



      //  dfs(graph, parent, rank, time, root);
        return ans;
        
    }
};