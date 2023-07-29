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

        int i=0;
        int n=s.size();
        int j=n-1;

        while(i<n && j>=0)
        {
            if(s[i]=='(' && s[j]==')')
            {
                i++;
                j--;
            }

            else if(s[i]=='(' && s[j]!=')')
            {
                j--;
            }

            else if(s[i]!=')' && s[j]==')')
            {
                i++;
            }

            else{
                i++;
                j--;
            }
        }

       0

        return ans;


       
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