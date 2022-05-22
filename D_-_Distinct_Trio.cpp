#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int n;
cin>>n;

int a[n];

for(int i=0;i<n;i++)
{
    cin>>a[i];

}

// Find the number of triples

// (i,j,k) that satisfy both of the following conditions.

// 1≤i<j<k≤N
// Ai​, Aj​, and Ak​ are distinct.

//use dp to solve this problem

//base case

//dp[0][0][0]=0;

// int dp[n+1][n+1][n+1];

// dp[0][0][0]=0;

// int i,j,k;

// for(i=1;i<=n;i++)
// {
//     for(j=1;j<=n;j++)
//     {
//         for(k=1;k<=n;k++)
//         {
//             if(i<j && j<k)
//             {
//                 if(a[i-1]!=a[j-1] && a[j-1]!=a[k-1] && a[k-1]!=a[i-1])
//                 {
//                     dp[i][j][k]=dp[i-1][j-1][k-1]+1;
//                 }
//                 else
//                 {
//                     dp[i][j][k]=dp[i-1][j-1][k-1];
//                 }
//             }
//             else
//             {
//                 dp[i][j][k]=dp[i-1][j-1][k-1];
//             }
//         }
//     }
// }


//cout<<dp[n][n][n]<<endl;



//dp[i][j][k] = dp[i][j-1][k] + dp[i][j][k-1] - dp[i][j-1][k-1] + (a[i] == a[j] && a[i] == a[k] ? 1 : 0)


//cout<<dp[n-1][n-1][n-1]<<endl;

// dp[i][j][k] = dp[i][j-1][k-1] + dp[i][j][k-1] - dp[i][j-1][k]




    return 0;
}