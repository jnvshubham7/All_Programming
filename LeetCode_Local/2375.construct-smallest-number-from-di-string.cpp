/*
 * @lc app=leetcode id=2375 lang=cpp
 *
 * [2375] Construct Smallest Number From DI String
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
    string smallestNumber(string p) {



          
        int n = p.size();

        stack<int> st;
        string ans = "";

        if(p[0]=='I')
        {
            ans+= '1';
        }
        else
        {
            st.push(1);
        }

        for(int i=1;i<=n;i++)
        {
            if(p[i-1]=='I')
            {
                while(!st.empty())
                {
                    ans+= to_string(st.top());
                    st.pop();
                }
            }
           st.push(i+1);

        }

        while(!st.empty())
        {
            ans+= to_string(st.top());
            st.pop();
        }
        return ans;




       
        




    //     string num = "";
    //      bool flag = true;

    //     int nummin = 1;

    //     for(int i=0;i<=n;i++)
    //     {
    //         num += to_string(nummin);
    //         nummin++;
    //     }

    //    // cout<<num<<endl;

    //    while(true)
    //    {
             
    //           for(int i=0;i<n;i++)
    //           {
    //             if(pattern[i]=='I')
    //             {
    //                  if(num[i]>num[i+1])
    //                  {
    //                       flag = false;
                         
    //                  }
    //             }
    //             else
    //             {
    //                  if(num[i]<num[i+1])
    //                  {
    //                       flag = false;
                         
    //                  }
    //             }
    //           }


    //           if(flag==true)
    //           {
    //               break;
    //           }
             
              
              
    //      for(int i=0;i<n;i++)
    //     {
    //         if(pattern[i] == 'I')
    //         {
    //             if(num[i] > num[i+1])
    //             {
    //                 swap(num[i],num[i+1]);
    //             }
    //         }
    //         else
    //         {
    //             if(num[i] < num[i+1])
    //             {
    //                 swap(num[i],num[i+1]);
    //             }
    //         }
    //     }

    //    }
       

    //     return num;

        

        // vector<int> v= {1, 2, 3, 4, 5, 6, 7, 8, 9};

        //inc_rec and dec_rec

        // for(int i=0;i<n;i++){
        //     if(pattern[i]=='I'){
        //        inc_rec(v,num,i);
        //     }
        //     else{
        //         dec_rec(v,num,i);
        //     }
        // }

        




        // for (int i = 0; i < n; i++) {
        //     if (pattern[i] == 'I') {
        //         int min = INT_MAX;
        //         for (int j : v) {
        //             if (j < min) {
        //                 min = j;
        //             }
        //         }
        //         v.erase(remove(v.begin(), v.end(), min), v.end());
        //         num += to_string(min);
        //     } else {
        //         int max = INT_MIN;
        //         for (int j : v) {
        //             if (j > max) {
        //                 max = j;
        //             }
        //         }
        //         v.erase(remove(v.begin(), v.end(), max), v.end());
        //         num += to_string(max);
        //     }
        // }
        // for (int i = 0; i < v.size(); i++) {
        //     num += to_string(v[i]);
        // }
        // return num;


        // for (int i = 0; i < n; i++) {
        //     if (pattern[i] == 'I') {
        //         num += '1';
        //     } else {
        //         num += '9';
        //     }
        // }
        // num += '0';
        // for (int i = 0; i < n; i++) {
        //     if (pattern[i] == 'I') {
        //         for (int j = 0; j < n; j++) {
        //             if (num[j] < num[j + 1]) {
        //                 swap(num[j], num[j + 1]);
        //                 break;
        //             }
        //         }
        //     } else {
        //         for (int j = 0; j < n; j++) {
        //             if (num[j] > num[j + 1]) {
        //                 swap(num[j], num[j + 1]);
        //                 break;
        //             }
        //         }
        //     }
        // }
        // return num;
        
        
    }



    // void inc_rec(vector<int>& v,string& num,int i){
    //     if(i==v.size()-1){
    //         num+=to_string(v[i]);
    //         return;
    //     }
    //     for(int j=0;j<v.size();j++){
    //         if(v[j]<v[j+1]){
    //             swap(v[j],v[j+1]);
    //             inc_rec(v,num,i+1);
    //             swap(v[j],v[j+1]);
    //         }
    //     }
    // }
    // void dec_rec(vector<int>& v,string& num,int i){
    //     if(i==v.size()-1){
    //         num+=to_string(v[i]);
    //         return;
    //     }
    //     for(int j=0;j<v.size();j++){
    //         if(v[j]>v[j+1]){
    //             swap(v[j],v[j+1]);
    //             dec_rec(v,num,i+1);
    //             swap(v[j],v[j+1]);
    //         }
    //     }
    // }

};
// @lc code=end





int main(){
Solution s;

// Input: pattern = "IIIDIDDD"
// Output: "123549876"

string pattern = "IIIDIDDD";
cout<<s.smallestNumber(pattern)<<endl;

    


    return 0;
}