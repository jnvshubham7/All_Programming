/*
 * @lc app=leetcode id=695 lang=cpp
 *
 * [695] Max Area of Island
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define fr(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define ppi pair<int,pair<int,int>>
#define ppd pair<double,pair<int,int>>
    





// @lc code=start
class Solution {
public:

     
     vector<int> cnt_store;
     
     int cnt=0;

    int maxAreaOfIsland(vector<vector<int>>& grid) {

        int n=grid.size();
        int m=grid[0].size();

       vector<vector<int>> vis(n,vector<int>(m,0));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 && vis[i][j]==0)
                {
                    dfs(grid,i,j,vis);
                    cnt_store.push_back(cnt);
                    cnt=0;

                }

               
            }
        }

        int max=0;
        for(int i=0;i<cnt_store.size();i++)
        {
            if(cnt_store[i]>max)
            {
                max=cnt_store[i];
            }
        }
        return max;

        

    }
   

    void dfs(vector<vector<int>>& grid,int i,int j,vector<vector<int>>& vis)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==0 || vis[i][j]==1)
        {
            return;
        }
        vis[i][j]=1;
        cnt++;
        dfs(grid,i+1,j,vis);
        dfs(grid,i-1,j,vis);
        dfs(grid,i,j+1,vis);
        dfs(grid,i,j-1,vis);
    }

};
// @lc code=end






int main(){
Solution s;


   



    int n,m;
    cin>>n>>m;

    vector<vector<int>> grid(n,vector<int>(m,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }

    cout<<s.maxAreaOfIsland(grid)<<endl;


     // grid = [[0,0,1,0,0,0,0,1,0,0,0,0,0],
    // [0,0,0,0,0,0,0,1,1,1,0,0,0],
    // [0,1,1,0,1,0,0,0,0,0,0,0,0],
    // [0,1,0,0,1,1,0,0,1,0,1,0,0],
    // [0,1,0,0,1,1,0,0,1,1,1,0,0],
    // [0,0,0,0,0,0,0,0,0,0,1,0,0],
    // [0,0,0,0,0,0,0,1,1,1,0,0,0],
    // [0,0,0,0,0,0,0,1,1,0,0,0,0]]

    //m=12;
    //n=9;

   







    return 0;
}