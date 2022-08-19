/*
 * @lc app=leetcode id=2376 lang=cpp
 *
 * [2376] Count Special Integers
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

   
   
    int countSpecialNumbers(int n) {

        int cnt=0;

        for(int i=0;i<n;i++)
        {
            if(isSpecial(i))
            {
                cnt++;
            }
        }

        return cnt;

             

        
    }

    bool isSpecial(int n) {

        // if (dp[n] != -1) {
        //     return dp[n];
        // }

        // int digits[10]= {0};

        // while (n) {
        //     digits[n % 10]++;
        //     n /= 10;
        // }
        // bool isSpecial = true;
        // for (int i = 0; i < 10; i++) {
        //     if (digits[i] > 1) {
        //         isSpecial = false;
        //         break;
        //     }
        // }
        // dp[n] = isSpecial;
        // return isSpecial;




        int digits[10] = {0};
        while (n) {
            digits[n % 10]++;
            n /= 10;
        }
        for (int i = 0; i < 10; i++) {
            if (digits[i] > 1) {
                return false;
            }
        }
        return true;

        // int num = n;
        // while (num) {
        //     int digit = num % 10;
        //     if (digit == 0 || digit == 1 || digit == 8) {
        //         return false;
        //     }
        //     num /= 10;
        // }
        // return true;
    }
};
// @lc code=end





int main(){
Solution s;


    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<s.countSpecialNumbers(n)<<endl;
    }
    


    return 0;
}