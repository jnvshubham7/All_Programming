/*
 * @lc app=leetcode id=2342 lang=cpp
 *
 * [2342] Max Sum of a Pair With Equal Sum of Digits
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

    int maximumSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());

       //map<pair<int,int>,int> m;
       //vector in maP
         unordered_map<int, int> m;
        vector<pair<int,int>> v;


        int n=nums.size();

        int res=-1;

        for(int i=0;i<n;i++)
        {
            int sum=0;
            int num=nums[i];
            while(num>0)
            {
                sum+=num%10;
                num/=10;
            }

            m[sum]++;
            v.pb(mp(sum,nums[i]));



            
           
            
           
        }

        //sort map and v
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
       




    //     //in map find how many second numberin map ==2
    //    vector<int> ans2;

        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second>=2)
            {

                int sum=0;
               // int pair=it->second/2;
               int pair=2;
                for(int i=0;i<v.size();i++)
                {
                    if(v[i].first==it->first && pair>0)
                    {
                        sum+=v[i].second;
                        pair--;
                    }
                }
                res=max(res,sum);
                

                
            }
           
        }


        //print v
        // for(int i=0;i<n;i++)
        // {
        //     cout<<digit_sum[i]<<" ";
        // }
        // cout<<endl;

        // unordered_map<int, int> m;
        // for(int i=0;i<n;i++)
        // {
        //     m[digit_sum[i]]=nums[i];
        // }


        //it.secon.first==2 return first.

        //print map
    //   for(auto it=m.begin();it!=m.end();it++)
    //     {
    //         cout<<it->first<<" "<<it->second<<endl;
    //     }

    //     cout<<endl;

    //     //print v
    //     for(int i=0;i<v.size();i++)
    //     {
    //         cout<<v[i].first<<" "<<v[i].second<<endl;
    //     }







        
        return res;


        

        
    }
};
// @lc code=end


int main(){
Solution s;



//[229,398,269,317,420,464,491,218,439,153,482,169,411,93,147,50,347,210,251,366,401]
 vector<int> nums={229,398,269,317,420,464,491,218,439,153,482,169,411,93,147,50,347,210,251,366,401};
  cout<<  s.maximumSum(nums);




    


    return 0;
}