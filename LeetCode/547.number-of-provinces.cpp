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
        int count=0;
        vector<bool> visited(n,false);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(graph,visited,i);
                count++;
            }
        }
        return count;

       
    }

    void dfs(vector<vector<int>>& graph,vector<bool>& visited,int i){
        visited[i]=true;
        for(int j=0;j<graph.size();j++){
            if(graph[i][j]==1 && !visited[j]){
                dfs(graph,visited,j);
            }
        }
    }

};


































// @lc code=end

