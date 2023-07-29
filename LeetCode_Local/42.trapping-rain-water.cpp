/*
 * @lc app=leetcode id=42 lang=cpp
 *
 * [42] Trapping Rain Water
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
    int trap(vector<int>& height) {

        int n=height.size();

        if(n<=1)
            return 0;

        int maxL[n];
        int maxR[n];

        maxL[0]=height[0];
        maxR[n-1]=height[n-1];

        for(int i=1;i<n;i++)
        {
            maxL[i]=max(maxL[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            maxR[i]=max(maxR[i+1],height[i]);
        }

        int water[n];

        for(int i=0;i<n;i++)
        {
            water[i]=min(maxL[i],maxR[i])-height[i];
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=water[i];
        }
        return sum;


        //print maxL and maxR
        // for(int i=0;i<n;i++)
        // {
        //     cout<<maxL[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<n;i++)
        // {
        //     cout<<maxR[i]<<" ";
        // }
        // cout<<endl;

     


    }

};
// @lc code=end





int main(){
Solution s;

ll t;
cin>>t;
while(t--){

    ll n;
    cin>>n;
    vi v(n);
    fr(i,n)
    {
       int x;
         cin>>x;
        v[i]=x;
    }
    //cout<<s.trap(v)<<endl;
    s.trap(v);


}

    return 0;
}