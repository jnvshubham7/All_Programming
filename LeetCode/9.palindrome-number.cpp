/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
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