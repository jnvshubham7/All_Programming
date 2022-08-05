// https://leetcode.com/discuss/interview-question/2340720/Sprinklr-or-OA-or-July-2022

// Workload

// Bob is a contractor and he has to complete the work of a building in minimum time. 
//For this, he has hired N workers to complete the work. Each worker has been assigned 
//some work denoted by workload array. Now, to finish the work as early as possible 
//Bob makes a strategy and chooses any number x and he defines that the time required 
//for a worker to finish his work would be equal to workload[i]-a-i for each i from 1 to N

// Help Bob to find out the minimum total amount of time it would take for 
//the workers to complete the work after choosing an optimal number x

// Input format

// The first line contains an integer N- the number of workers

// ⚫ The second line contains N space-separated integers denoting the workloads of the workers

// Output format

// Print an integer denoting the minimum time required to complete the given work.

// Constraints

// 1 <=N<=2.105

// 0 <= workload[i] <= 109

// Sample input E

// Sample output

// 5 21453

// Explanation

// Given

// N=5 ⚫ workloads = [2,1,4,5,3]

// Approach

// Here to obtain the total minimum time we can choose the number x as 1 • 
//So, The minimum amount of time required to complete the work would be 5 for the given sample input


#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin>>n;
    ll arr[n];
    ll temp[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        temp[i]=arr[i];
    }
   
    for(int i=0;i<n;i++)
    {
        temp[i]=abs(temp[i]- (i+1));
    }

    sort(temp,temp+n);

    ll mid_val=temp[n/2];
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=abs(arr[i]-mid_val- (i+1));
    }

    cout<<ans<<endl;

    return 0;

}
// #define ll long long
// #define vi vector<int>
// #define pii pair<int,int>
// #define fr(i,n) for(int i=0;i<n;i++)
// #define all(v) v.begin(),v.end()
// #define mem(a,b) memset(a,b,sizeof(a))
// #define MOD 1000000007
// #define pb push_back
// #define mp make_pair
// #define pii pair<int,int>
// #define vll vector<ll>
// #define vc vector<char>
// #define vs vector<string>
// #define ppi pair<int,pair<int,int>>
// #define ppd pair<double,pair<int,int>>

// int main(){
// ll t;
// cin>>t;
// while(t--){

//     ll n;
//     cin>>n;
//     ll arr[n];
//     fr(i,n) cin>>arr[i];
//     ll temp[n];
//     fr(i,n) temp[i]=arr[i];


//     for(ll i=0;i<n;i++){

//        arr[i]=abs(arr[i]-(i+1));
       

//     }
//     sort(arr,arr+n);
//     //find median
//     ll mid=n/2;
//     //print array
//     // fr(i,n) cout<<arr[i]<<" ";
//     // cout<<endl;

//    // cout<<arr[mid]<<endl;

//     ll mid_val=arr[mid];

//    for(ll i=0;i<n;i++){
//       temp[i]=abs(temp[i]-mid_val-(i+1));
//    }

//    ll sum=0;
//     fr(i,n) sum+=temp[i];
//     cout<<sum<<endl;
   
    

   
   

// }

//     return 0;
// }