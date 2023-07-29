/*
 * @lc app=leetcode id=2343 lang=cpp
 *
 * [2343] Query Kth Smallest Trimmed Number
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

    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {

        int n=nums.size();
        int m=queries.size();
        vector<int> ans;

        for(int i=0;i<m;i++){
             ll k=queries[i][0];
            ll trim=queries[i][1];
           
           priority_queue<pair<string ,int>> pq;
           for(int j=0;j<n;j++){

           ll len=nums[j].size();
           string temp=nums[j].substr(len-trim);

              pq.push(mp(temp,j));

           }

        
           for(int j=0;j<(n-k);j++){
           
            pq.pop();
            
           }
              ans.pb(pq.top().second);

              while(!pq.empty()){
                pq.pop();
              }

             
        }
        
        return ans;









        //  priority_queue<int, vector<int> , greater<int>> pq;



        // for(int i=0;i<n;i++)
        // {
        //     int len=nums[i].length();
        //     int k=queries[i][0];
        //     int trim=queries[i][1];

        //     int index=0;

          
          
        //     for(int j=0;j<n;j++)
        //     {

        //         int len=nums[j].size();
        //         int num=stoi(nums[j].substr(len-trim));
        //        // cout<<num<<" ";

        //         pq.push(num);
               
        //     }
        //      for(int j=0;j<k-1;j++)
        //     {
        //         //int num=pq.top();
        //         pq.pop();
               
        //     }
        //    // cout<<pq.top()<<" ";
        //     ans.push_back(pq.top());

        //    //clear pq
        //     while(!pq.empty())
        //     {
        //         pq.pop();
        //     }
            

            
        //    // cout<<endl;

        // }

        // return ans;

    }
};
// @lc code=end


int main(){
Solution s;


  //  Input: nums = ["102","473","251","814"], queries = [[1,1],[2,3],[4,2],[1,2]]

  vector<string> nums={"102","473","251","814"};
    vector<vector<int>> queries={{1,1},{2,3},{4,2},{1,2}};

    vector<int> ans=s.smallestTrimmedNumbers(nums,queries);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;


    return 0;
}