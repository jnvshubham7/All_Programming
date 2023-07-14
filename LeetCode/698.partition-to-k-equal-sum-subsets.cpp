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

        int n=nums.size();

        sort(nums.begin(),nums.end());

        //print nums
        for(int i=0;i<n;i++)
            cout<<nums[i]<<" ";

        int sum=0;
        for(int i=0;i<n;i++)
            sum+=nums[i];

        if(sum%k!=0)
            return false;

        int target=sum/k;

        if(nums[n-1]>target)
            return false;

        vector<bool> visited(n,false);

        return solve(nums,visited,0,k,0,target);


            // return false;

     
    }

    bool solve(vector<int>& nums,vector<bool>& visited,int start,int k,int cur_sum,int target)
    {
        if(k==1)
            return true;

        if(cur_sum==target)
            return solve(nums,visited,0,k-1,0,target);

        for(int i=start;i<nums.size();i++)
        {
            if(!visited[i])
            {
                visited[i]=true;
                if(solve(nums,visited,i+1,k,cur_sum+nums[i],target))
                    return true;
                visited[i]=false;
            }
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