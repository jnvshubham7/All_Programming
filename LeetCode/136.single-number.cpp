/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
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
    int singleNumber(vector<int>& nums) {

         if(nums.size() < 1) {
            return 0;
        }
        
        else if(nums.size() > 1) {
            
            sort(nums.begin(), nums.end());
            
            for(int i=0; i<nums.size(); i++) {
                if(nums[i] != nums[i+1]) {
                    return nums[i];
                }
                i++;
            }
        }
        
        //else for nums.size() == 1
        return nums[0];
        
    }
};
// @lc code=end

