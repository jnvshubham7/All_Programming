
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

        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++)
        {
          mp[nums[i]]=i;
        }

        for(int i=0;i<nums.size();i++)
        {
            int x=target-nums[i];
            if(mp.find(x)!=mp.end() && mp[x]!=i)
            {
                return {i,mp[x]};
            }
        }

        return {};


        
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