/*
 * @lc app=leetcode id=547 lang=cpp
 *
 * [547] Number of Provinces
 */

// @lc code=start











class Solution {
public:
    int findCircleNum(vector<vector<int>>& graph) {

        int n=graph.size();
        int m=graph[0].size();

        vector<vector<int>> vis(n,vector<int> (m,0));

        int cnt=0;

        for(int i=0;i<n;i++)
        {
            if(vis[i][i]=0)
            {
                dfs(graph,vis,i);
                cnt++;
            }
        }

    }


    void dfs(vector<vector<int>> & graph , vector<vector<int>> & vis, int i)
    {

        for(int j=0;j<graph[0].size();j++)
        {
            if(graph[i][j]==1 && vis[j][])
        }

    }

  
   
};


























class Solution {
public:
    int findCircleNum(vector<vector<int>>& graph) {
        
        int n=graph.size();
        int m=graph[0].size();
        int cnt=0;
        
        vector<vector<int>> vis(n, vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            if(vis[i][i]==0){
                dfs(graph,vis,i);
                cnt++;
            }
        }

        //print vis
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<vis[i][j]<<" ";
            }
            cout<<endl;
        }

        
        return cnt;
        
    }
    
    
    void dfs(vector<vector<int>>& graph, vector<vector<int>>& vis, int i){
        for(int j=0;j<graph[0].size();j++){
            if(graph[i][j]==1 && vis[j][j]==0){
                vis[j][j]=1;
                dfs(graph,vis,j);
            }
        }
    }
        

    
    
    
    
    
    
    
    
    
// };


























// @lc code=end

