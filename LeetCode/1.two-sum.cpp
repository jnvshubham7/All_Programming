/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
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
    




// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

       // unordered_map<int,int> mp;

        vector<int> v;
        for(int i=0;i<nums.size();i++)
		{
			for(int j=nums.size()-1;j>=i+1;j--)
			{
				if(nums[i]+nums[j]==target)
				{
					v.push_back(i);
					v.push_back(j);
                   // cout<<nums[i]<<" "<<nums[j]<<endl;
					return v;
				}
			}
        }
        return v;
		// for(int i=0;i<nums.size();i++)
		// {
		// 	for(int j=i+1;j<nums.size();j++)
		// 	{
		// 		if(nums[i]+nums[j]==target)
		// 		{
		// 			v.push_back(i);
		// 			v.push_back(j);
		// 			return v;
		// 		}
		// 	}
        // }
        // return v;

        // for(int i=0;i<nums.size();i++)
        // {
        //     mp[nums[i]]=i;

        // }

       

    //    for(int i=0;i<nums.size();i++)
    //     {
    //       //  mp[nums[i]]=i;
    //         if(mp.find(target-nums[i])!=mp.end())
    //         {
                
    //             return {mp[target-nums[i]],i};
    //         }
    //         mp[nums[i]]=i;
    //     }

    //     return {};

        // vector<int> v;

        // int i=0;
        // int j=nums.size()-1;

        // while(i<j)
        // {
        //     if(nums[i]+nums[j]==target)
        //     {
        //         v.push_back(i);
        //         v.push_back(j);

        //         return v;

        //     }
        //     else if(nums[i]+nums[j]<target)
        //     {
        //         i++;

        //     }

        //     else {
        //        j--;
        //     }
        // }

        // return {};


        
        
    }
};
// @lc code=end






int main(){
Solution s;

   int a[]={2,7,11,15};
    vector<int> v(a,a+4);

    vi v1=s.twoSum(v,9);

  fr(i,v1.size())
  {
        cout<<v1[i]<<" ";
  }
    



    return 0;
}