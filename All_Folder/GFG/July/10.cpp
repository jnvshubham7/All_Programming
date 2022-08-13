
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
    




class Solution
{
public:

    vector<vector<int>> ans;
    
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {

        vector<int> path;
       
        solve(0,0,n,m,grid,path);

        return ans;



        // code here
    }

    void solve(int i, int j, int n, int m, vector<vector<int>> &grid, vector<int> &path)
    {
        if(i == n-1 && j == m-1)
        {

            path.push_back(grid[i][j]);
            ans.push_back(path);
            path.pop_back();
           
            return;
        }
        if(i < 0 || j < 0 || i >= n || j >= m)
        {
            return;
        }
       
       
        path.push_back(grid[i][j]);
        solve(i+1,j,n,m,grid,path);
        solve(i,j+1,n,m,grid,path);
        path.pop_back();
       
      
    }


};






int main(){
Solution s;


vector<vector<int>> grid = {{1,2,3},{4,5,6},{7,8,9}};
vector<vector<int>> ans = s.findAllPossiblePaths(3,3,grid);

    // print vector
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;


    return 0;
}