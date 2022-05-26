#include<bits/stdc++.h>
using namespace std;
#define ll long long


// bool isPalindrome(string s)
// {
//     int n = s.length();
//     int i = 0, j = n - 1;
//     while (i < j)
//     {
//         if (s[i] != s[j])
//             return false;
//         i++;
//         j--;
//     }
//     return true;
// }

int main(){

int t;
cin>>t;
while(t--){

    int n;
    cin>>n;

    string s;
    cin>>s;

    int cnt=0;


    for(int i=0;i<n/2;i++)
    {

        if(s[i]!=s[n-1-i])
        cnt++;

    }

    cout<<cnt<<endl;

//     you are given a binary string A of length N

// .

// You can perform the following type of operation on the string A

// :

//     Choose two different indices i

// and j (1≤i,j≤N)
// ;
// Change Ai
// and Aj to Ai⊕Aj. Here ⊕

//     represents the bitwise XOR operation.

// Find the minimum number of operations required to convert the given string into a palindrome.

// if(isPalindrome(s))
// {
//     cout<<"0"<<endl;
// }
// else
// {

    //Find the minimum number of operations required to convert the given string into a palindrome

   






    // int n = s.length();
    // int dp[n][n];
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == 0 || j == 0)
    //         {
    //             dp[i][j] = 0;
    //         }
    //         else if (s[i - 1] == s[j - 1])
    //         {
    //             dp[i][j] = dp[i - 1][j - 1] + 1;
    //         }
    //         else
    //         {
    //             dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    //         }
    //     }
    // }

    // cout<<n-dp[n-1][n-1]<<endl;

}
    











    return 0;
}