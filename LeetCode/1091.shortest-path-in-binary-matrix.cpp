/*
 * @lc app=leetcode id=1091 lang=cpp
 *
 * [1091] Shortest Path in Binary Matrix
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
    




// @lc code=start
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
// @lc code=end





int main(){
Solution s;

    


    return 0;
}