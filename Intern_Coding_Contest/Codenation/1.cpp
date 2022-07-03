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

int main(){


// You are the last successor of a worthy clan whose name we don't know (you can use your own imagination sometimes :p).

// You are in your kingdom with no troops but your barracks train X troops every day. Initially X=1

// There are N neighbor kingdom each of which has A[i] amount of troops guarding it. To take over a kingdom you need to attack it with at least A[i] tro

// Once you capture a kingdom, as a consequence of war, all of your troops die(even if you attacked with > A[i] troops) and X increases by 1.

// Assuming Attacking and capturing a kingdom takes no time, find minimum days the worthy king needs to wait to take over the entire globe?

// Tip for Python users: Iteration is faster and more efficient than recursion.

// Problem Constraints

// 1 <= N <= 20

// 1 <=A[i] <= 106

// Input Format

// First argument is an integer array A



int arr[]={4,3,1};
int n=sizeof(arr)/sizeof(arr[0]);


int total=1;
int day=0;


// int x=1;
// int ans=0;
// int i=0;
// while(i<n){
//     if(x>=A[i]){
//         x=x-A[i];
//         i++;
//     }
//     else{
//         ans++;
//         x=x+1;
//     }
// }
// return ans-3;








    return 0;
}