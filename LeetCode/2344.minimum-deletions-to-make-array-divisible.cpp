/*
 * @lc app=leetcode id=2344 lang=cpp
 *
 * [2344] Minimum Deletions to Make Array Divisible
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

    int minOperations(vector<int>& nums, vector<int>& numsDivide) {



        // int gcd=numsDivide[0];
        // fr(i,numsDivide.size())
        // {
        //     gcd=__gcd(gcd,numsDivide[i]);
        //     cout<<gcd<<" ";
        // }

        int gcd=findGCD(numsDivide);



        sort(all(nums));
       
       for(int i=0;i<nums.size();i++)
       {
             if(gcd%nums[i]==0)
             {
                 return i;
             }


       }

       return -1;










        // int n=nums.size();
        // int m=numsDivide.size();

       
        // int cnt=0;
    

        // sort(all(nums));
        // sort(all(numsDivide));





        // if(numsDivide[0]<nums[0])
        //     return -1;

       
        // for(int i=0;i<n;i++)
        // {

        //     ll temp=nums[i];
        //     ll x=0;
        //     for(int j=0;j<m;j++)
        //     {  
        //         if(numsDivide[0]<temp)
        //             return -1;
        //        if(numsDivide[j]%temp!=0)
        //        {
        //            cnt++;
        //            break;
        //        }
        //         else
        //         {
        //              x++;
        //         }

        //     }
        //     if(x==m)
        //     {
        //         return cnt;
        //     }

        // }

        // return -1;


       


        
    }

    int findGCD(vector<int>& nums)
    {
        int n=nums.size();
        int gcd=nums[0];
        for(int i=1;i<n;i++)
        {
            gcd=__gcd(gcd,nums[i]);
            cout<<gcd<<" ";
        }
        return gcd;
    }
};
// @lc code=end

