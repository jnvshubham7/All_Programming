/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
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
    int mySqrt(int x) {

        long long s=0, e=x, ans, mid;

        while(s<=e)
        {
            mid=(s+e)/2;
            if(mid*mid==x)
                return mid;
            else if(mid*mid<x)
            {
                ans=mid;
                s=mid+1;
            }
            else
                e=mid-1;
        }

        return ans;



        
        
    }
};
// @lc code=end

