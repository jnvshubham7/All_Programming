/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */
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

    bool isPalindrome(int x) {

        // if(x<0)
        //     return false;
        // int temp=x;
        // int rev=0;
        // while(temp>0)
        // {
        //     rev=rev*10+temp%10;
        //     temp/=10;
        // }
        // return rev==x;

        if(x<0)
        return false;

        int temp=x;

        long long rev=0;

        while(temp>0)
        {
            rev=rev*10+temp%10;
            temp/=10;
        }

        return rev==x;
       


       




       



        
    }

    int reverse(int x) {
        int y = 0;
        while(x > 0) {
            y = y * 10 + x % 10;
            x /= 10;
        }
        return y;
    }
};
// @lc code=end










#include<bits/stdc++.h>
using namespace std;
#define ll long long

 bool isPalindrome(int x) {

        if (x < 0) return false;
        if (x == 0) return true;

        int reverse = 0;

        while(x!=0)
        {
            reverse = reverse*10 + x%10;
            x /= 10;

        }


        return reverse == x;



        
    }

int main(){

int t;
cin>>t;
while(t--){

    int n;
    cin>>n; 
    cout<<isPalindrome(n)<<endl;


}

    return 0;
}