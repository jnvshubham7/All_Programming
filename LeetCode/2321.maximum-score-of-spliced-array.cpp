/*
 * @lc app=leetcode id=2321 lang=cpp
 *
 * [2321] Maximum Score Of Spliced Array
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
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {


      

        int n=nums1.size();
        int m=nums2.size();
        
        int dp[n+1][m+1];

        memset(dp,0,sizeof(dp));

        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0)
                {
                    dp[i][j]=nums2[j];
                }
                else if(j==0)
                {
                    dp[i][j]=nums1[i-1];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                    if(nums1[i-1]==nums2[j-1])
                    {
                        dp[i][j]=max(dp[i][j],dp[i-1][j-1]+nums1[i-1]);
                    }
                }
            }
        }
        return dp[n][m];


    //     int sum1=0;
    //     int sum2=0;
    //     for(int i=0;i<n;i++)
    //     {
    //         sum1+=nums1[i];

    //     }
    //     for(int i=0;i<m;i++)
    //     {
    //         sum2+=nums2[i];
    //     }


        
    //     if(sum1>=sum2)
    //     {
    //         //goes same index in both arrays if nums1[i]<nums2[i] then swap
    //         for(int i=0;i<n;i++)
    //         {
    //             int num2_max=0;

    //             // if(nums1[i]<nums2[i])
    //             // {
    //             //     swap(nums1[i],nums2[i]);
    //             // }
    //         }

    //     }
    //     else
    //     {
    //         //goes same index in both arrays if nums1[i]<nums2[i] then swap
    //         for(int i=0;i<m;i++)
    //         {
    //             if(nums2[i]<nums1[i])
    //             {
    //                 swap(nums1[i],nums2[i]);
    //             }
    //         }
    //     }

    //    int sum_r1=0;
    //     int sum_r2=0;
    //     for(int i=0;i<n;i++)
    //     {
    //         sum_r1+=nums1[i];
    //     }
    //     for(int i=0;i<m;i++)
    //     {
    //         sum_r2+=nums2[i];
    //     }

    //     return max(sum_r1,sum_r2);




        // int dp[n+1][m+1];
        // memset(dp,0,sizeof(dp));
        // for(int i=0;i<=n;i++)
        // {
        //     for(int j=0;j<=m;j++)
        //     {
        //         if(i==0)
        //         {
        //             dp[i][j]=j;
        //         }
        //         else if(j==0)
        //         {
        //             dp[i][j]=i;
        //         }
        //         else if(nums1[i-1]==nums2[j-1])
        //         {
        //             dp[i][j]=dp[i-1][j-1];
        //         }
        //         else
        //         {
        //             dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        //         }
        //     }
        // }
        // return dp[n][m];


     




    }
};
// @lc code=end




int main(){
Solution s;

   int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> nums1(n);
        fr(i,n)
        {
            cin>>nums1[i];
        }
        vector<int> nums2(m);
        fr(i,m)
        {
            cin>>nums2[i];
        }
    cout<<   s.maximumsSplicedArray(nums1,nums2)<<endl;
       //print nums1 and nums2
    fr(i,n)
    {
        cout<<nums1[i]<<" ";
    }
    cout<<endl;
    fr(i,m)
    {
        cout<<nums2[i]<<" ";
    }
    cout<<endl;
    
     }

    return 0;
}
