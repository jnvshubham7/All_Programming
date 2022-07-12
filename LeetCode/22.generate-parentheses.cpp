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

    vector<string> ans;



    vector<string> generateParenthesis(int n) {

        solve("",n,n);
        return ans;


    }

    void solve(string op,int open,int close){
        if(open==0 && close==0){
            ans.push_back(op);
            return;
        }
        if(open>0){
            op.push_back('(');
            solve(op,open-1,close);
            op.pop_back();
        }
        if(close>open){
            op.push_back(')');
            solve(op,open,close-1);
            op.pop_back();
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