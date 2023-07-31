/*
 * @lc app=leetcode id=1545 lang=cpp
 *
 * [1545] Find Kth Bit in Nth Binary String
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
    char findKthBit(int n, int k) {

        string s = "0";
        solve(1,n,s);
       
        cout << s << endl;
        return s[k-1];
        
    }

   

    string reverse_invert(string& s) {
        string res;
        for (int i=0; i<s.size(); i++) {
            if (s[i] == '0') res += '1';
            else res += '0';
        }
        reverse(res.begin(), res.end());
        return res;
    }

    void solve(int cur, int n, string& s) {
        if (cur == n) return;

        string s1 = s;

        s1 = reverse_invert(s1);
        s+='1';
        s+=s1;
        solve(cur+1,n,s);
        
        

    }


};
// @lc code=end





int main(){
Solution s;


    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        cout << s.findKthBit(n, k) << endl;
    }


    return 0;
}