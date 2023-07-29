/*
 * @lc app=leetcode id=561 lang=cpp
 *
 * [561] Array Partition I
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
    int arrayPairSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i+=2)
        {
            sum+=nums[i];
        }
        return sum;
        
    }
};
// @lc code=end






int main(){
Solution s;

    vi nums={1,4,3,2};
    cout<<s.arrayPairSum(nums)<<endl;
    


    return 0;
}