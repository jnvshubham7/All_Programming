/*
 * @lc app=leetcode id=1557 lang=cpp
 *
 * [1557] Minimum Number of Vertices to Reach All Nodes
 */

// @lc code=start
class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {


         vector<int> res;
       unordered_map<int,int> indegree;
        for(int i=0;i<edges.size();i++)
        {
            indegree[edges[i][1]]++;
        }
        
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
            {
                res.push_back(i);
            }
        }
        
        return res;

        
        // vector<int> res;
        // vector<int> visited(n,0);
        // for(int i=0;i<edges.size();i++)
        // {
        //     visited[edges[i][1]]=1;
        // }
        
        // for(int i=0;i<n;i++)
        // {
        //     if(visited[i]==0)
        //     {
        //         res.push_back(i);
        //     }
        // }
        
        // return res;
        
        


        
    }
};
// @lc code=end

