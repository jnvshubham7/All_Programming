/*
 * @lc app=leetcode id=698 lang=cpp
 *
 * [698] Partition to K Equal Sum Subsets
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

    bool canPartitionKSubsets(vector<int>& nums, int k) {

        return solve(nums,k,0,0,0);
    





    //     unordered_map<int,int> mp;
    //     for(int i=0;i<n-1;i++)
    //         mp[nums[i]]++;

        
    //    int sum=nums[n-1];

    //    //print map
    //     //  for(auto it=mp.begin();it!=mp.end();it++)
    //     //  {
    //     //      // cout<<it->first<<" "<<it->second<<endl;
    //     //  }
    //     //     cout<<endl;

    //    for(int i=n-2;i>=0;i--)
    //    {
    //        if(mp[sum-nums[i]])
    //        {
    //         cout<<"sum-nums[i] "<<sum-nums[i]<<endl;
           
    //            mp[sum-nums[i]]--;
    //             cout<<"mp[sum-nums[i]] "<<mp[sum-nums[i]]<<endl;
    //            k--;
    //        }
    //    }

      

    //      for(auto it=mp.begin();it!=mp.end();it++)
    //      {
    //           if(it->second)
    //           {
    //             return false;
    //           }
    //      }
    //         return true;
            

        
    }

    bool solve(vector<int>& nums,int k,int sum,int i,int j)
    {
        if(k==0)
        {
            return true;
        }
        if(i==nums.size())
        {
            return false;
        }
        if(solve(nums,k,sum+nums[i],i+1,j))
        {
            return true;
        }
        if(solve(nums,k-1,sum,i+1,j))
        {
            return true;
        }
        return false;
    }

  






};
// @lc code=end





int main(){
Solution s;


    // Input: nums = [1,2,3,4], k = 3
    
    vector<int> nums={1,2,3,4};
    int k=3;
    cout<<s.canPartitionKSubsets(nums,k)<<endl;



    return 0;
}