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

int main(){
ll t;
cin>>t;
while(t--){


    ll n;
    cin>>n;
 
    ll a[n];
    fr(i,n)cin>>a[i];
 
    ll b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

     ll cnt_0=0,cnt_1=0;

    fr(i,n){
        if(a[i]==0)cnt_0++;
        else cnt_1++;
    }

    // cout<<cnt_0<<" "<<cnt_1<<endl;

    ll min_ele=*min_element(b,b+n);


 
    priority_queue<ll> pq1,pq2;
 
    for(int i=0;i<n;i++){
       if(a[i]==1)pq1.push(b[i]);
       else pq2.push(b[i]);
    }
 
    ll sum=0;
 
    while(!pq1.empty() && !pq2.empty()){
        ll x=pq1.top();
        pq1.pop();
        ll y=pq2.top();
        pq2.pop();
        sum+=2*x+2*y;
    }
 
    while(!pq1.empty()){
        ll x=pq1.top();
        pq1.pop();
        sum+=x;
    }
 
    while(!pq2.empty()){
        ll x=pq2.top();
        pq2.pop();
        sum+=x;
    }

    if(cnt_0==cnt_1)
    cout<<sum-min_ele<<endl;
    
    else cout<<sum<<endl;

 
    
 
 
 
 
 
 
 
 
    // vector<ll> v1,v2;
 
    // for(int i=0;i<n;i++){
    //     if(a[i]==0){
    //         v1.pb(b[i]);
    //     }
    //     else{
    //         v2.pb(b[i]);
    //     }
       
    // }
 
    // //sort in reverse order
    // sort(v1.begin(),v1.end(),greater<ll>());
 
    // sort(v2.begin(),v2.end(),greater<ll>());

//     ll n;
//     cin>>n;

//     ll a[n];
//     fr(i,n)cin>>a[i];



//     ll b[n];
//     fr(i,n)cin>>b[i];


//     //cnt_0=0,cnt_1=0;

//     ll cnt_0=0,cnt_1=0;

//     fr(i,n){
//         if(a[i]==0)cnt_0++;
//         else cnt_1++;
//     }



//     // vector<ll> b(n);
//     // for(int i=0;i<n;i++){
//     //     ll x;
//     //     cin>>x;
//     //     b[i]=x;

//     // }

//       ll sum=0;

//     ll min_ele=*min_element(b,b+n);

//     // sum+=min_ele;



//     //erase elements from b
//     // for(int i=0;i<n;i++){
//     //     if(b[i]==min_ele){
//     //        b[i]=-1;
//     //        break;
//     //     }


//     // }

//     // for(int i=0;i<n;i++){
//     //    cout<<b[i]<<" ";
//     // }



    

//    // cout<<min_ele<<endl;

//     priority_queue<ll> pq1,pq2;

//     // for(int i=0;i<n;i++){
//     //    if(a[i]==1 && b[i]!=-1)pq1.push(b[i]);
//     //    else if (b[i]=!-1)
//     //    pq2.push(b[i]);
//     // }

  

    



//     // if(!pq2.empty()){
//     //   sum+=pq2.top();
//     //   pq2.pop();
//     // }



//     // if(!pq1.empty() && !pq2.empty()){

//     //     ll x=pq1.top();
//     //     ll y=pq2.top();

//     //     if(x==min_ele){
//     //         pq1.pop();
//     //         sum+=x;
//     //     }
//     //     else if(y==min_ele){
//     //         pq2.pop();
//     //         sum+=y;
//     //     }

//     //     break;
       
       
       
        
//    // }

//     while(!pq1.empty() && !pq2.empty()){


//         ll x=pq1.top();

//         pq1.pop();
        
//         ll y=pq2.top();

//         pq2.pop();

//       //  cout<<x<<" "<<y<<endl;

//         // if(pq1.size()==n && pq2.size()==n){

//         //     cout<<x<<" "<<y<<endl;

//         //     if(x>y)
//         //     {
//         //         sum+=x+2*y;
//         //     }
//         //     else{
//         //         sum+=2*x+y;
//         //     }


//         // }

//         // else {

//             sum+=2*x+2*y;



//         // }



         


//         pq1.pop();
//         pq2.pop();

        



        
//     }

//     while(!pq1.empty()){
//         ll x=pq1.top();
//         pq1.pop();
//         sum+=x;
//     }

//     while(!pq2.empty()){
//         ll x=pq2.top();
//         pq2.pop();
//         sum+=x;
//     }


//     if(cnt_0==n || cnt_1==n)
    
//     cout<<sum-min_ele<<endl;
//     else cout<<sum<<endl;
   








//     // vector<ll> v1,v2;

//     // for(int i=0;i<n;i++){
//     //     if(a[i]==0){
//     //         v1.pb(b[i]);
//     //     }
//     //     else{
//     //         v2.pb(b[i]);
//     //     }
       
//     // }

//     // //sort in reverse order
//     // sort(v1.begin(),v1.end(),greater<ll>());

//     // sort(v2.begin(),v2.end(),greater<ll>());








}

    return 0;
}