/*
 * @lc app=leetcode id=1647 lang=cpp
 *
 * [1647] Minimum Deletions to Make Character Frequencies Unique
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

//    bool all_different(vector<int>& v)
//    {
//          int n = v.size();
//          for(int i=0;i<n;i++)
//          {
//               for(int j=i+1;j<n;j++)
//               {
//                 if(v[i]==v[j])
//                 {
//                      return false;
//                 }
//               }
//          }
//          return true;
//    }
    int minDeletions(string s) {




          vector<int>freq(26);
        for(auto x:s)
        {
            freq[x-'a']++;
        }
        sort(freq.begin(),freq.end(),greater<int>());
        int maxf=freq[0]-1;
        int totald=0;
            for(int i=1;i<=25;i++)
            {
            if(freq[i]!=0)
            {
            if(freq[i]>maxf)
            {
             if(maxf>0){
                totald+=(freq[i]-maxf) ;
             } 
                else
                {
                    totald+=freq[i];
                }
            }
            }
            maxf=min(maxf-1,freq[i]-1);
        }
        return totald;














        // int cnt=0;

        // unordered_map<char, int> m;
        // for(auto c : s)
        // {
        //     m[c]++;
        // }

        // vector<int> v;
        // for(auto it : m)
        // {
        //     v.push_back(it.second);
        // }
        // sort(all(v));
        // //print vector
        // // for(auto it : v)
        // // {
        // //     cout<<it<<" ";
        // // }
        // // cout<<endl;
        
        // if(all_different(v))
        // {
        //     return 0;
        // }

        // int temp;

        // //is same element in the vector 
        // for(int i=0;i<v.size();i++)
        // {
        //     if(v[i]==v[i+1])
        //     {
        //         temp=v[i];
        //         break;
        //     }
        // }

        // unordered_map<int,int> m1;
        // for(auto it : v)
        // {
        //     m1[v[it]]++;
        // }

        // //print map
        // // for(auto it : m1)
        // // {
        // //     cout<<it.first<<" "<<it.second<<endl;
        // // }


        // while(true)
        // {
        //     if(m1[temp])
        //     {
        //         m1[temp]--;
        //         cnt++;
        //     }
        //     else
        //     {
        //         break;
        //     }
        // }


    

        // // unordered_map<int, int> m1;
        // // for(auto it : v)
        // // {
        // //     m1[it]++;
        // // }

        // // int ans=INT_MIN;

        // // for(auto it : m1)
        // // {
        // //     if(it.second > 1)
        // //     {
        // //         ans = max(ans, it.second);
        // //     }
        // // }

        // //return ans;

        // return cnt;





        
    }
};
// @lc code=end





int main(){
Solution s;

int t;
cin>>t;
while(t--)
{

    
    string str;
    cin>>str;
    cout<<s.minDeletions(str)<<endl;
}




    return 0;
}