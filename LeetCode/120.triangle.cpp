
/*
 * @lc app=leetcode id=120 lang=cpp
 *
 * [120] Triangle
 */

// @lc code=start
class Solution {
public:


int solve(vector<vector<int>>& triangle)
{
//find min sum of each row
    int n = triangle.size();
   int m= triangle[n-1].size();

   int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));

    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<triangle[i].size();j++)
        {
            dp[i][j]=triangle[i][j]+min(dp[i+1][j],dp[i+1][j+1]);
        }
    }
    return dp[0][0];
   

}


    int minimumTotal(vector<vector<int>>& triangle) {

        

      return solve(triangle);

        
    }
};
// @lc code=end


















// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long


// int main(){

//     vector<vector<int>> triangle = {{2},{3,4},{6,5,7},{4,1,8,3}};
//      int n = triangle.size();
//    int m= triangle[n-1].size();

//    int dp[n+1][m+1];
//     memset(dp,0,sizeof(dp));


//     for(int i=n-1;i>=0;i--)
//     {
//         for(int j=0;j<triangle[i].size();j++)
//         {
//             dp[i][j]=triangle[i][j]+min(dp[i+1][j],dp[i+1][j+1]);
//         }
//     }
//    // cout<<dp[0][0]<<endl;
    

//     //print dp matrix
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cout<<dp[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

















