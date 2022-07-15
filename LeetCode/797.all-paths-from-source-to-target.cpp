/*
 * @lc app=leetcode id=797 lang=cpp
 *
 * [797] All Paths From Source to Target
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {

        vector<vector<int>> res;
        vector<int> path;
        path.push_back(0);
        dfs(graph,0,path,res);
        return res;
        
    }

    void dfs(vector<vector<int>>& graph,int cur,vector<int>& path,vector<vector<int>>& res){
        if(cur==graph.size()-1){
            res.push_back(path);
            return;
        }

       // cout<<graph[cur].size()<<endl;
        for(int i=0;i<graph[cur].size();i++){
            path.push_back(graph[cur][i]);


           // cout<<graph[cur][i]<<" ";


            dfs(graph,graph[cur][i],path,res);


            //print path
            // for(int j=0;j<path.size();j++){
            //     cout<<path[j]<<" ";
            // }
            // cout<<endl;


            path.pop_back();
        }
    }
};
// @lc code=end

