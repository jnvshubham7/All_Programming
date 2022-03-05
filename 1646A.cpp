#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

ll t;
cin>>t;
while(t--){


    ll n, s;
    cin >> n >> s;
    ll result = 0;
    ll i = n * n;
    result += s / i;
    cout << result << endl;
}





// int n,s;
// cin>>n>>s;
 
// int ans = s/(n*n);
 
// if(ans > n+1){
//     cout<<(n+1)/ans<<endl;
// }else cout<<ans<<endl;
 
 
// }
 













//     ll n,s;
//     cin>>n>>s;
//     //sum+=n^2; count++; when sum>=s break loop and print count
//     ll sum=0,count=0;
//     //print n,s
//    // cout<<n<<" "<<s<<endl;

// // if(s==0){
// //     cout<<0<<endl;
// // }

// //run loop till sum<=s 


// //Luis has a sequence of n+1 integers a1,a2,…,an+1. For each i=1,2,…,n+1 it is guaranteed that 0≤ai<n, or ai=n^2.
// //m = squre of n
// ll m = n*n;

// //cout<<m<<endl;

// if(s==0){
//     cout<<"0"<<endl;
// }
// // else if(s==m){
// //     cout<<n<<endl;
// // }
// else{
//     for(ll i=0;i<n+1;i++){
//         sum+=m;

//         // if(sum==s){
//         //     count++;
//         //     break;
//         // }
//        // else
//          if(sum>s){
//             break;
//         }
       
//        else {
//               count++;
//        }
//         // count++;
//     }
//     cout<<count<<endl;
// }
// }
// return 0;
// }


// for(int i=0;i<=n+1;i++){
//     sum+=m;
   
//    // cout<<sum<<endl;
//      if(sum>=s)
//         break;
    

//      count++;

    
   
// }
// //sum
// //cout<<sum<<endl;
// cout<<count<<endl;
//     // while(sum<=s){
//     //     sum+=n^2;
//     //     count++;
//     //     //cout<<sum<<endl;
//     // }
//     // cout<<count<<endl;


// // for(int i=0;i<10^9;i++){
// //     sum+=n^2;
// //     if(sum>=s){
// //         break;
// //     }
// //     count++;

// // }
// // cout<<count<<endl;

//     // while(sum!=s){
//     //     if(sum>s){
//     //         break;
//     //     }
//     //     sum+=n*2;
//     //     count++;
//     // }
//     // cout<<count<<endl;



// // else{
// //     for(int i=1;i<=n;i++){
// //         sum+=i*i;
// //         count++;
// //         if(sum>=s){
// //             break;
// //         }
// //     }
// //     cout<<count<<endl;


// // }





// }

//     // while(sum<10^18){
//     //     sum+=n^2;
//     //     if(sum>=s)
//     //     {
//     //     break;
//     //     }
//     //     count++;
//     // }
//     // cout<<count<<endl;
    



    return 0;
}