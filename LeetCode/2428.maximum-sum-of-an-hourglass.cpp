/*
 * @lc app=leetcode id=2428 lang=cpp
 *
 * [2428] Maximum Sum of an Hourglass
 */

// @lc code=start
class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int ans=0;
        // vector<pair<int,int>> dirs={{-1,-1},{-1,0},{-1,1},{1,0},{1,-1},{1,1}};
        // //print dirs

        // for(int i=1;i<grid.size()-1;i++){
        //     for(int j=1;j<grid[0].size()-1;j++){
        //         int sum=0;
        //         sum+=grid[i][j];
        //         for(auto dir:dirs){
        //             int x=i+dir.first;
        //             int y=j+dir.second;
        //             if(x>=0 && x<grid.size() && y>=0 && y<grid[0].size()){
        //                 sum+=grid[x][y];
        //             }
        //         }
        //         ans=max(ans,sum);
        //     }
        // }
        // return ans;

        
        vector<pair<int,int>> dirs={{-1,-1},{-1,0},{-1,1},{1,0},{1,-1},{1,1}};

        for(int i=1;i<grid.size()-1;i++){
            for(int j=1;j<grid[0].size()-1;j++){
                int sum=0;
                sum+=grid[i][j];
                for(auto dir:dirs){
                    int x=i+dir.first;
                    int y=j+dir.second;
                    if(x>=0 && x<grid.size() && y>=0 && y<grid[0].size()){
                        sum+=grid[x][y];
                    }
                }
                ans=max(ans,sum);
            }
        }

        return ans;
    }
};
// @lc code=end

