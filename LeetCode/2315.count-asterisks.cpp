/*
 * @lc app=leetcode id=2315 lang=cpp
 *
 * [2315] Count Asterisks
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
    int countAsterisks(string s) {
        int n = s.size();
       int count = 0;
       int cnt1 = 0;
       int cnt2 = 0;
       
       for(int i=0;i<n;i++)
       {
          if(s[i]=='|')
          {
            cnt1++;
          }
          if(cnt1%2==0 && s[i]=='*')
          {
            cnt2++;
          }
       }

       return cnt2;
    
    //    bool flag=true;
    //      int count=0;
    //      for(int i=0;i<s.size();i++)
    //      {
    //        if(s[i]=='|')
    //        flag=!flag;
    //        if(flag)
    //        {
    //          if(s[i]=='*')
    //          count++;
    //        }
    //      }
         
    //     return count;






    //use two pointers
     //Return the number of '*' in s, excluding the '*' between each pair of '|'.
        //Note that each '|' will belong to exactly one pair.
        // int n=s.size();
        // int i=0;
        // int j=0;
        // int count=0;
        // while(i<n)
        // {
        //     if(s[i]=='|')
        //     {
        //         i++;
        //         continue;
        //     }
        //     while(j<n)
        //     {
        //         if(s[j]=='|')
        //         {
        //             j++;
        //             break;
        //         }
        //         j++;
        //     }
        //     if(j==n)
        //     {
        //         break;
        //     }
        //     count++;
        //     i=j;
        // }
        // return count;

      







        // int count=0;
        // for(int i=0;i<s.length();i++)
        // {
        //     if(s[i]=='*')
        //     {
        //         if(i==0 || s[i-1]=='|')
        //         {
        //             count++;
        //         }
        //     }
        // }
        // return count;
    

    //     int n = s.size();
    //     int countstar = 0;
    //     //store all the indices of '|'
    //   unordered_map<int,int> mp;
    //     for(int i=0;i<n;i++)
    //     {
    //         if(s[i]=='|')
    //         {
    //             mp[i]=1;
    //         }
    //     }

    //     // cout<<"size of us is "<<us.size()<<endl;
    //     // cout<<"size of s is "<<s.size()<<endl;
    //     for(int i=0;i<n;i++)
    //     {
    //         if(s[i]=='*')
    //         {
    //             if(us.find(i)!=us.end())
    //             {
    //                 continue;
    //             }
    //             else
    //             {
    //                 countstar++;
    //             }
    //         }
    //     }
    //     return countstar;
       //  cout<<v.size()<<endl;

       //take 1st '|' as ith index  and 2nd '|' as jth index
       //ccount star then i++ and j++ both simultaneously
         //if i>=j then break
        // for(int i=0;i<n;i++)
        // {
        //     if(s[i]=='|')
        //     {
        //         for(int j=i+1;j<n;j++)
        //         {
        //              countstar++;
        //             if(s[j]=='|')
        //             {
        //                //i move to next index where '|' is present
        //                 i=j;
        //                 break;
                       
        //             }


        //         }

        //         v[i]
        //     }
        // }
        // return countstar;



        // for(int i=0;i<v.size()-1;i++)
        // {
        //     int j = v[i]+1;
        //     int k = v[i+1];
        //     int count = 0;
        //     while(j<k)
        //     {
        //         if(s[j]=='*')
        //             count++;

        //         j++;
        //     }
        //     countstar+=count;
        //     cout<<countstar<<endl;
        // }
        // return countstar;










        //now we have all the indices of '|'

        //use sliding window to count the number of asterisks
      //  int i=0,j=0;
        // while(i<v.size() && j<v.size())
        // {
        //     if(v[j]-v[i]==2)
        //     {
        //         if(s[v[i]+1]=='*')
        //             countstar++;
        //         //countstar++;
        //         j++;
        //     }
        //     else
        //     {
        //         i++;
        //         j++;
        //     }
        // }

       // return countstar;
        // for(int i=0;i<n;i++){
        //     if(s[i]=='|' ){
        //         countstar++;
        //         i++;
        //     }
        // }
        // return countstar;
        // int i = 0, j = 0;
        // while(j < n){
        //     if(s[j] == '|'){
        //         ans += (j-i-1)/2;
        //         i = j+1;
        //     }
        //     j++;
        // }
        // return ans;


        // int n = s.size();
        // int ans = 0;
        // int i = 0;
        // while(i<n){
        //     if(s[i]=='|'){
              
        //         if(s[i]=='*'){
        //         ans++;
        //         i++;
        //         continue;
        //     }
            

        //     }

        //     if(s[i]=='|')
        //     {

        //     }
            

        //     i++;
        // }
        // return ans;

        // int  n=s.size();

        // int count = 0;
        // int cnt2=0;
        // for (int i = 0; i < s.size(); i++) {
        //     if (s[i] == '*') {
        //         count++;
        //     }
        // }
        
       
        
       //count all star which b/w 2st "|" and 3nd "|" or 4rd "|" and 5th "|" or so on
        // int count = 0;
        // for(int i=0;i<v.size();i++)
        // {
        //     if(i%2!=0)
        //     {
        //         count++;
        //     }
        // }
        // return count;
        // int count = 0;
        // for (int i = 0; i < n; i++) {
        //     if (s[i] == '|') {
        //         if (s[i + 1] == '*') {
        //             count++;
        //         }
        //     }
        // }


        // for (int i = 0; i < s.size(); i++) {
        //     if (s[i] == '|') {
        //         cnt1++;
        //     }
        //     if (s[i] == '*') {
        //         cnt2++;
        //     }
        //     if (cnt1 == 1 && cnt2 == 1) {
        //         count--;
        //     }
        // }
        // return count;
        // for (int i = 0; i < s.size(); i++) {
        //     int cnt1 = 0;
        //     if (s[i] == '|') {
        //         cnt1++;
        //     }
        //    // when odd cnt1 then
        //     if (cnt1 % 2 != 0) {
        //         if (s[i] == '*') {
        //             cnt2++;
        //         }
        //     }
        //     if(cnt1%2==0){
                
        //         cnt1=0;
        //     }
        // }
        // return count-cnt2;
      

        
    }
};
// @lc code=end





int main(){
Solution s;

int t;
cin>>t;
while(t--){

    string str;
    cin>>str;
    
    cout<<s.countAsterisks(str)<<endl;
}


    return 0;
}