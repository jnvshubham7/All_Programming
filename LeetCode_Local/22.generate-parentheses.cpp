/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
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

    vector<string> generateParenthesis(int n) {

        vector<string> ans;
        solve(n, 0, 0, "", ans);
        return ans;


    }




    void solve(int n, int open, int close, string output, vector<string> &ans)
    {
        if(open==n && close==n)
        {
            ans.push_back(output);
            return;
        }

        if(open<n)
        {
            solve(n, open+1, close, output+'(', ans);
        }

        if(close<open)
        {
            solve(n, open, close+1, output+')', ans);
        }

    }

};
// @lc code=end





int main(){
Solution s;

    int n;
    cin>>n;
    vector<string> v=s.generateParenthesis(n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;




    return 0;
}

