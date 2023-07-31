/*
 * @lc app=leetcode id=2348 lang=cpp
 *
 * [2348] Number of Zero-Filled Subarrays
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


    

    
  
    long long zeroFilledSubarray(vector<int>& nums) {

     int n=nums.size();

     int cnt=0;
     long long ans=0;
     for(auto it:nums) {
         if(it==0) {
             cnt++;
             ans+=cnt;
         }
         else {
             
             cnt=0;
         }
     }

      return ans;

    //  unordered_map<int,int> m;

    //  //find all maximum subarray with 0 in it
    //  int cnt=0;

    //  for(int i=0;i<n;i++) {
    //      if(nums[i]==0) {
    //          cnt++;
    //      }
    //      else {
    //        m[i]=cnt;
    //        cnt=0;
    //      }

    //  }


    //  ll ans=0;

    // for(auto it:m)
    // {
    //     if(it.second>0)
    //     {

    //         //count all 
    //         ans+=(it.second*(it.second+1))/2;
    //     }
    // }

    //   for(auto it:m) {
    //        cout<<it.first<<" "<<it.second<<endl;
    //     }

    // return ans;

    // print the map
      

      //  return 0;




    //   for(int i=0;i<n;i++) {
    //       if(nums[i]==0) {
    //           cnt++;
    //       }
    //   }


    //   //find duble occurence of 0
    //     int cnt0=0;
    //     for(int i=0;i<n;i++) {
    //         if(nums[i]==0) {
    //             cnt0++;
    //         }
    //         else {
    //             cnt0=0;
    //         }
    //         if(cnt0==2) {
    //             cnt++;
    //         }
    //     }

    //     //find triple occurence of 0
    //     int cnt0=0;
    //     for(int i=0;i<n;i++) {
    //         if(nums[i]==0) {
    //             cnt0++;
    //         }
    //         else {
    //             cnt0=0;
    //         }
    //         if(cnt0==3) {
    //             cnt++;
    //         }
    //     }
    //     return cnt;


    }

        

        

     


};
// @lc code=end







int main(){
Solution s;


    
    int nums[]={0,0,0,2,0,0};
    vi v(nums,nums+sizeof(nums)/sizeof(int));
    cout<<s.zeroFilledSubarray(v)<<endl;



    return 0;
}