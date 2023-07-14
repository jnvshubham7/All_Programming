/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */
h
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

    int removeDuplicates(vector<int>& nums) {

        int n=nums.size();

        if(n==0)
        return 0;

        int i=0;
        int j=1;

        while(j<n)
        {
            if(nums[i]==nums[j])
            {
                j++;
            }
            else
            {
                i++;
                nums[i]=nums[j];
                j++;
            }
        }

        return i+1;
        
        
    }
};
// @lc code=end

