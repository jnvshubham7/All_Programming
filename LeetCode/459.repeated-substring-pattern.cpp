// /*
//  * @lc app=leetcode id=459 lang=cpp
//  *
//  * [459] Repeated Substring Pattern
//  */

// // @lc code=start
// class Solution {
// public:
//     bool repeatedSubstringPattern(string s) {
//         int n=s.size();
//         if(n==1)
//         return false;
//        unordered_map<char,int> mp;

//        for(int i=0;i<n;i++)
//        {
//         mp[s[i]]++;
//        }


//        vector<int> v;
//          for(auto it=mp.begin();it!=mp.end();it++)
//          {
//           v.push_back(it->second);
//          }

//          //check all same in v
//             int m=v.size();
            
//         //check all same in v

//         for(int i=0;i<m-1;i++)
//         {
//             if(v[i]!=v[i+1])
//             return false;
            
//         }




//       //check all characters frquency are same or not

//     //   for(int i=0;i<n;i++)
//     //   {
//     //     if(mp[s[i]])
//     //     {
//     //         return true;
//     //     }
//     //   }

//     //   for(auto it=mp.begin();it!=mp.end();it++)
//     //   {
//     //     if(it->second%2!=0)
//     //     {
//     //         return false;
//     //     }
//     //   }

//       return true;

       
       


        
//     }
// };
// // @lc code=end



#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    //"ababba"
    string s="ababba";
int n=s.size();
        if(n==1)
        return false;
       unordered_map<char,int> mp;

       for(int i=0;i<n;i++)
       {
        mp[s[i]]++;
       }


       vector<int> v;
         for(auto it=mp.begin();it!=mp.end();it++)
         {
          v.push_back(it->second);
         }

         //print vector
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;

         //check all same in v
            int m=v.size();
            
        //check all same in v

        // for(int i=0;i<m-1;i++)
        // {
        //     if(v[i]!=v[i+1])
        //    // return false;
            
        // }




     // return true;



    return 0;
}