#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    string str1;
    string str2;
    cin>>str1>>str2;
    int n1 = str1.length();
    int n2 = str2.length();
    //You have been given two Strings “STR1” and “STR2” of characters. Your task is to find the length of the longest common subsequence.
//A String ‘a’ is a subsequence of a String ‘b’ if ‘a’ can be obtained from ‘b’ by deletion of several (possibly, zero or all) characters. 
//A common subsequence of two Strings is a subsequence that is common to both Strings.

    //find the longest common subsequence
    int dp[n1+1][n2+1];
    for(int i=0;i<=n1;i++){
        for(int j=0;j<=n2;j++){
            if(i==0 || j==0){
                dp[i][j] = 0;
            }
            else if(str1[i-1] == str2[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout<<dp[n1][n2]<<endl;















    // int dp[n1+1][n2+1];
    // for(int i=0;i<=n1;i++){
    //     for(int j=0;j<=n2;j++){
    //         if(i==0 || j==0){
    //             dp[i][j] = 0;
    //         }
    //         else if(str1[i-1] == str2[j-1]){
    //             dp[i][j] = dp[i-1][j-1] + 1;
    //         }
    //         else{
    //             dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
    //         }

        
    


    //      cout<<dp[i][j]<<" ";
    //     }
    // }

    

}

    return 0;
}