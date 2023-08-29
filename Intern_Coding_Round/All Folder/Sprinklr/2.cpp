// https://leetcode.com/discuss/interview-question/2340720/Sprinklr-or-OA-or-July-2022


// Employee of The Year

// Dunder Mifflin Paper Company is back with its employee appreciation event The Dundies. This

// time they've introduced a new category "Employee of The Year. To be eligible for the nomination

// in this category, an employee must meet the following criteria with respect to his/her attendance for the last N days.

// ⚫ The employee should not have been absent for more than or equal to 2 days in total ⚫ 
//The employee should not have been late to work for 3 or more consecutive days

// An attendance record of an employee for N days can be represented as a string of length N where 
//each character signifies whether the employee was absent, late, or present on that day. The record only contains the following three characters:

// A Absent

// L: Late.

// P: Present

// Given an integer N (number of days), return the number of possible attendance records of length: 
//N that make an employee eligible for the award nomination. The answer may be very large, so

// return it modulo 109 +7.

// Input Format:

// You'll be given a single integer N.

// Output Format:

// Return an integer that represents the number of possible attendance records that make an employee eligible.

// Constraints:

// 1 <= N <=

// 105

// Sample input E

// Sample output

// Explanation

// There are 8 records with length 2 that are eligible for the award: "PP". "AP" "PA", "LP" "PL". "AL", "LA", "LL" Only

// "AA" is not eligible because there are 2 absences (there need to be fewer than 2)



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



int solve(long long n)
{
    vector<int> dp(n+2,0);
    dp[1]=3;

    dp[2]=8;

    for(int i=3;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
        dp[i]%=MOD;
        dp[i]+=dp[i-3];
        dp[i]%=MOD;
    }
    return dp[n];

    
}
   





int main(){
ll t;
cin>>t;
while(t--){

    ll n;
    cin>>n;
    cout<<solve(n)<<endl;

}

    return 0;
}




