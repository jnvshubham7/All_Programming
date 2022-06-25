/*
 * @lc app=leetcode id=1249 lang=cpp
 *
 * [1249] Minimum Remove to Make Valid Parentheses
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
    string minRemoveToMakeValid(string s) {

         int n = s.size();
        vector<int> stack;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                stack.push_back(i);
            } else if (s[i] == ')') {
                if (stack.empty()) {
                    s[i] = '*';
                } else {
                    stack.pop_back();
                }
            }
        }
        for (int i = 0; i < stack.size(); i++) {
            s[stack[i]] = '*';
        }
        string res;
        for (int i = 0; i < n; i++) {
            if (s[i] != '*') {
                res += s[i];
            }
        }
        return res;
        
    }
};
// @lc code=end






int main(){
Solution s;

    string str;
    cin>>str;

    cout<<s.minRemoveToMakeValid(str)<<endl;



    return 0;
}