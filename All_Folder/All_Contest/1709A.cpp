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

    ll x;
    cin>>x;
    ll a,b,c;
    cin>>a>>b>>c;

  




//     There are three doors in front of you, numbered from 1 to 3

// from left to right. Each door has a lock on it, which can only be opened with a key with the same number on it as the number on the door.

// There are three keys — one for each door. Two of them are hidden behind the doors, so that there is no more than one key behind each door. So two doors have one key behind them, one door doesn't have a key behind it. To obtain a key hidden behind a door, you should first unlock that door. The remaining key is in your hands.

// Can you open all the doors?
// Input

// The first line contains a single integer t
// (1≤t≤18

// ) — the number of testcases.

// The first line of each testcase contains a single integer x
// (1≤x≤3

// ) — the number on the key in your hands.

// The second line contains three integers a,b
// and c (0≤a,b,c≤3) — the number on the key behind each of the doors. If there is no key behind the door, the number is equal to 0

// .

// Values 1,2
// and 3 appear exactly once among x,a,b and c

// .
// Output

// For each testcase, print "YES" if you can open all the doors. Otherwise, print "NO".

 unordered_map<ll,ll> m;
    m[1]=a;
    m[2]=b;
    m[3]=c;

    if(x==0){
        cout<<"NO"<<endl;
       
    }

    if(x==1){
        if(m[x]!=0 && m[m[x]]!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    if(x==2){
        if(m[x]!=0 && m[m[x]]!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    if(x==3){
        if(m[x]!=0 && m[m[x]]!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }































    // if(x==1)
    // {
    //     if(a!=0)

    //     {
    //         if(a==2 && b==1 && c==0)
    //         {
    //             cout<<"YES"<<endl;
    //         }
    //         else
    //         {
    //             cout<<"NO"<<endl;
    //         }

    //     }
    //     else
    //     {
    //         cout<<"NO"<<endl;
    //     }

    // }
    // if(x==2)
    // {
    //     if(b!=0)
    //     {
    //         if(b==1 && a==3 && c==0)
    //         {
    //             cout<<"YES"<<endl;
    //         }
    //         else
    //         {
    //             cout<<"NO"<<endl;
    //         }
    //     }
    //     else
    //     {
    //         cout<<"NO"<<endl;
    //     }
    // }
    // if(x==3)
    // {
    //     if(c!=0)
    //     {
    //         if(c==1 && a==2 && b==0)
    //         {
    //             cout<<"YES"<<endl;
    //         }
    //        else if(c==2 && a==1 && b==0)
    //         {
    //             cout<<"YES"<<endl;
    //         }
    //         else
    //         {
    //             cout<<"NO"<<endl;
    //         }
    //     }
    //     else
    //     {
    //         cout<<"NO"<<endl;
    //     }
    // }
    // if(a>b && b>c || a<b && b<c)
    // {
    //     cout<<"YES"<<endl;
    // }
    // else
    // {
    //     cout<<"NO"<<endl;
    // }
    



    

    



    

}

    return 0;
}