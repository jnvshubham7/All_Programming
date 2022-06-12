#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int n,x;
    cin>>n>>x;

    //buy 2 get 1 free

   int amount_for_2=0;
    int amount_for_1=0;

   while(n>0)
   {
       
        amount_for_2+=2*x;
         n-=2;


         amount_for_1+=x;
            n--;





    }

    //add
    int ans=amount_for_2+amount_for_1;
    cout<<ans<<endl;



    // if(n>0){
    //     if(n>2){

    //     }
    // }
    // while(n>=x){
    //     n-=x;
    //     count++;
    //     n-=x/2;
    //     count++;
    // }
    // if(n==0) cout<<count<<endl;
    // else cout<<-1<<endl;



//     There is a sale going on in Chefland. For every 2

// items Chef pays for, he gets the third item for free (see sample explanations for more clarity).

// It is given that the cost of 1
// item is X rupees. Find the minimum money required by Chef to buy at least N items.


    // int ans=0;  
    // int i=0;
    // while(n>0){
    //     if(n%2==0){
    //         ans+=x;
    //         n=n/2;
    //     }
    //     else{
    //         ans+=x;
    //         n--;
    //     }
    // }
    // cout<<ans<<endl;



    //2 items are bought for x amount then 1 item free again 2 items are bought for x amount then 1 item free again and so on
    //check how money is required to buy n items

    // int ans=0;
    // int count = 0;
    // vector<int> v(n);

    // v[0]=x;
    // v[1]=x;
    // v[2]=0;
    // v[3]=x;
    // v[4]=x;
    // v[5]=0;
    // v[6]=x;
    // v[7]=x;
    // v[8]=0;


    // for(int i=9;i<n;i++){
    //     v[i]=v[i-1]+v[i-2]+v[i-3];
    // }

    // //print vector
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // for(int i=0;i<n;i++){
    //    int ans= ans+v[i];
    // }

    // cout<<ans<<endl;






    //one time buy 2 items for x amount and then free one item so on

    //first buy 2 items for x amount and then the next time buy 1 item for x amount and so on

    //1 && 2 for x amount then 3 is free and 4 && 5 for x amount then 6 is free and so on
    //calculate minimum amount of money required to buy n items

    //use dp to solve this problem

    //dp[i] = min(dp[i-1], dp[i-2] + x)

    //dp[0] = x
    //dp[1] = x
    //dp[2] = 0
    //dp[3]=dp[0]
    //dp[4]=dp[1]
    //dp[5]=dp[2]
    //dp[6]=dp[3]

    //use this dp to calculate minimum amount of money required to buy n items

   // dp[i] = min(dp[i-1], dp[i-2] + x)






    // while(n>0){
    //     if(n%2==0){
    //         ans+=x*2;
    //         n-=2;
    //     }
    //     else{
    //         ans+=x;
    //         n-=1;
    //     }
    //     count++;
    // }

    // cout<<ans<<endl;

//   while(n>0){
//       if(n>=2){
//           ans+=x*2;
//           n-=2;
//       }
//       else if(n==1){
//           ans+=x;
//           n-=1;
//       }
//       else{
//             break;
//         //   ans+=x;
//         //   n-=1;
//       }
//   }

//     cout<<ans<<endl;

    // int ans=0;
    // while(n>0){
    //     if(n%2==0){
    //         ans+=x;
    //         n-=2;
    //     }
    //     else{
    //         ans+=x;
    //         n-=1;
    //     }
    // }
    // cout<<ans<<endl;

}

    return 0;
}