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





















vector<int> maxSubarray(vector<int> arr) {

//     vector<int> ans;
//     int n = arr.size();
//     int max_subarry_sum = INT_MIN;
//     int curr_subarry_sum = 0;
//     for (int i = 0; i < n; i++) {
//         curr_subarry_sum = curr_subarry_sum + arr[i];
//         if (curr_subarry_sum < 0) {
//             curr_subarry_sum = 0;
//         }
//         if (max_subarry_sum < curr_subarry_sum) {
//             max_subarry_sum = curr_subarry_sum;
//         }
//     }

//     //subsequence max sum
//     int max_sub_sum = 0;
    
//     for (int i = 0; i < n; i++) {
//         if(arr[i]>0){
//             max_sub_sum += arr[i];
//         }
       
       
//     }



  

   


//    if(n==1)
//    {
//     ans.pb(arr[0]);
//     ans.pb(arr[0]);
//    }

//     if(max_subarry_sum==0){
//         ans.pb(-1);
//     }
//     else{
//         ans.pb(max_subarry_sum);
//     }
    
//     if(max_sub_sum==0){
//         ans.pb(-1);
//     }
//     else{
//         ans.pb(max_sub_sum);
//     }

   
   
//     return ans;




 int maxsum=INT_MIN;
    int cursum=0;
    for(int i=0;i<arr.size();i++){
        cursum+=arr[i];
        maxsum=max(maxsum,cursum);
        if(cursum<0){
            cursum=0;
        }
    }
    vector<int>v;
    v.push_back(maxsum);
    int sum=0;
    bool flag=false;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>=0){
            sum+=arr[i];
            flag=true;
        }
    }
    sort(arr.begin(),arr.end());
    if(flag==false){
        sum=arr[arr.size()-1];
    }
    v.push_back(sum);
    return v;
    
    
    
    
    
    

}























int main(){
ll t;
cin>>t;
while(t--){

    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    vector<int> ans=maxSubarray(vector<int>(a,a+n));
    cout<<ans[0]<<" "<<ans[1]<<endl;


    

}

    return 0;
}