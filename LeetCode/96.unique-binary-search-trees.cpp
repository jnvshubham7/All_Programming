/*
 * @lc app=leetcode id=96 lang=cpp
 *
 * [96] Unique Binary Search Trees
 */

// @lc code=start
class Solution {
public:
    int numTrees(int n) {

        

      

        
    }
};
// @lc code=end





#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int n;
cin>>n;

  
 int dp[n+1];

        //put 0 in all the elements of dp
        for(int i=0;i<=n;i++)
        {
            dp[i]=0;
        }

        dp[0]=1;
        dp[1]=1;

        for(int i=2;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            {
                dp[i]+=dp[j]*dp[i-j-1];
               // cout<<dp[j]<<" "<<dp[i-j-1]<<" "<<dp[i]<<endl;
            }
        }

        //print dp
        for(int i=0;i<=n;i++)
        {
            cout<<dp[i]<<" ";
        }

        
        
       // return dp[n];

    return 0;
}
