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

    int a,b;
    cin>>a>>b;

    if(a%2==1 && b%2==1){
        cout<<"NO"<<endl;
    }

    else if(a==1 || b==1)
    {
        cout<<"NO"<<endl;
    }   

    else {
        cout<<"YES"<<endl;
    }

    
   

    // if(a%2==0 && b%2==0 || a%2==0 && b%2!=0 || a%2!=0 && b%2==0){
    //     cout<<"YES"<<endl;
    // }
    // else{
    //     cout<<"NO"<<endl;
    // }



    

}

    return 0;
}