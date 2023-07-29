/*
 * @lc app=leetcode id=1048 lang=cpp
 *
 * [1048] Longest String Chain
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

// bool is_valid(string s) {
//     if(s.size() < 1) {
//         return false;
//     }
    
//     else if(s.size() > 1) {
//         return true;
//     }

//     else {
//         return false;
//     }
// }



    int longestStrChain(vector<string>& words) {

        // int n=words.size();
        // int ans=0;
        // int max_len=0;
        // int max_len_index=0;

        // for(int i=0; i<n; i++) {
        //     if(words[i].length() > max_len) {
        //         max_len = words[i].length();
        //         max_len_index = i;
        //     }
        // }

        // for(int i=0; i<n; i++) {
        //     if(words[i].length() == max_len) {
        //         if(words[i].length() == 1) {
        //             ans++;
        //         }
        //         else {
        //             if(is_valid(words[i], words[max_len_index])) {
        //                 ans++;
        //             }
        //         }
        //     }
        // }

        // return ans;

        return 1;
        
    }
};
// @lc code=end





int main(){
Solution s;

   int n;
    cin>>n;
    vs words(n);
    fr(i,n)
    {
        string s;
        cin>>s;
        words[i]=s;

    }
    //print the words
    fr(i,n)
    {
        cout<<words[i]<<endl;
    }

    //cout<<s.longestStrChain(words)<<endl;



    return 0;
}




//input 

//"a","b","ba","bca","bda","bdca

// 5 
// a b ba bca bda bdca
