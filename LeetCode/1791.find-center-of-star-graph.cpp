/*
 * @lc app=leetcode id=1791 lang=cpp
 *
 * [1791] Find Center of Star Graph
 */

// @lc code=start
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {

        int n=edges.size();
        vector<int> adj[n+2];

        for(int i=0;i<n;i++)
        {
           adj[edges[i][0]].push_back(edges[i][1]);
           adj[edges[i][1]].push_back(edges[i][0]);

        }


        //print adjacency list

        // for(int i=0;i<n+2;i++)
        // {
        //     cout<<i<<" : ";
        //     for(int j=0;j<adj[i].size();j++)
        //     {
        //         cout<<adj[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        

       for(int i=0;i<n+2;i++)
       {
           if(adj[i].size()>1)
           {
               return i;
           }
       }

      return -1;

        


    }


};
// @lc code=end

