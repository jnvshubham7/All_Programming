/*
 * @lc app=leetcode id=785 lang=cpp
 *
 * [785] Is Graph Bipartite?
 */

// @lc code=start
class Solution {
public:

     

      bool dfs(int node, vector<vector<int>>& graph, vector<int>& color)
      {

                for(auto it:graph[node])
                {

                    if(color[it]==color[node])
                        {
                            return false;
                        }

                    else if(color[it]==0)
                    {
                        color[it]=-color[node];
                        if(!dfs(it,graph,color))
                        {
                            return false;
                        }
  
                    }

                }
                
       return true;

      }


    bool isBipartite(vector<vector<int>>& graph) {

         int n=graph.size();
        vector<int> color(n,0);

        //dfs
        

        for(int i=0;i<n;i++)
        {
            if(color[i]==0)
            {
                color[i]=1;
               if(!dfs(i,graph,color))
               {
                return false;
               }
            
            }
        }

        return true;

       





















        //bfs

        // queue<int> q;

        // for(int i=0;i<n;i++)
        // {
        //     if(color[i]==0)
        //     {
        //         q.push(i);
        //         color[i]=1;

        //         while(!q.empty())
        //         {
        //             int node=q.front();
        //             q.pop();

        //             for(auto it:graph[node])
        //             {
        //                 if(color[it]==0)
        //                 {
        //                     q.push(it);
        //                     color[it]=-color[node];
        //                 }

        //                 else if(color[it]==color[node])
        //                 {
        //                     return false;
        //                 }
        //             }
        //         }
        //     }
        // }

        //return true;
        
    }
};
// @lc code=end

