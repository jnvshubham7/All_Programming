/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */

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

    int pivotIndex(vector<int>& nums) {  
        int n=nums.size();
       ll sum=0;
         ll leftsum=0;
         ll rightsum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        rightsum=sum;

        for(int i=0;i<n;i++)
        {
            rightsum=rightsum-nums[i];
            if(leftsum==rightsum)
            {
                return i;
            }
            leftsum+=nums[i];
        }
        return -1;


      

       





    }
};
// @lc code=end

