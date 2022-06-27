/*
 * @lc app=leetcode id=1423 lang=cpp
 *
 * [1423] Maximum Points You Can Obtain from Cards
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
    int maxScore(vector<int>& cardPoints, int k) {

        

        //  int n=cardPoints.size();
        //  if(k==n)
        //  {

            

        //         int sum=0;
        //         for(int i=0;i<n;i++)
        //         {
        //             sum+=cardPoints[i];
        //         }
        //         return sum;
        //  }

        //  vector<int> v;
        //  //push n-k to n-1 
        //     for(int i=n-k;i<n;i++){
        //         v.push_back(cardPoints[i]);
        //     }
        //     //push 0 to k
        //     for(int i=0;i<k;i++){
        //         v.push_back(cardPoints[i]);
        //     }

        //  vector<vector<int>> slide_win;
        //  //all possible sliding window of size k store in slide_win
        //     for(int i=0;i<n-k;i++){
        //         vector<int> temp;
        //         for(int j=i;j<i+k;j++){
        //             temp.push_back(v[j]);
        //         }
        //         slide_win.push_back(temp);
        //     }

        //     //find sum of each sliding window and store in sum_win
        //     vector<int> sum_win;
        //     for(int i=0;i<slide_win.size();i++){
        //         int sum=0;
        //         for(int j=0;j<slide_win[i].size();j++){
        //             sum+=slide_win[i][j];
        //         }
        //         sum_win.push_back(sum);
        //     }

        //    sort(sum_win.begin(),sum_win.end());

        //    return sum_win[sum_win.size()-1];


            
            //return slide_win;



         

     
        // int sum1=0;
        // int sum2=0;
        // int ans=0;

        // for(int i=0;i<k;i++){
        //     sum1+=cardPoints[i];
        //     sum2+=cardPoints[n-i-1];
           
        // }

      //  ans=max(sum1,sum2);


       // return ans;

        
    }
};
// @lc code=end





int main(){
Solution s;

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> cardPoints(n);
        fr(i,n){
            cin>>cardPoints[i];
        }
        cout<<s.maxScore(cardPoints,k)<<endl;
       // vector<vector<int>> ans=s.maxScore(cardPoints,k);
        // fr(i,ans.size()){
        //     fr(j,ans[i].size()){
        //         cout<<ans[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

    }



    return 0;
}
