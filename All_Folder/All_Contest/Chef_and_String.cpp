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

    string X;
    cin>>X;


//     L(X) is defined as shifting all characters of string XXX one step towards left and moving the first character to the end.
// R(X)R(X)R(X) is defined as shifting all characters of string XXX one step towards the right and moving the last character to the beginning.
   

   //create left shift string
    string L;
    for(int i=1;i<X.size();i++){
        L+=X[i];
    }
    L+=X[0];
    //cout<<L<<endl;

    //create right shift string
    string R;
    for(int i=X.size()-2;i>=0;i--){
        R+=X[i];
    }
    R+=X[X.size()-1];
    reverse(R.begin(),R.end());
    //cout<<R<<endl;

    if(L==R){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

   




}

    return 0;
}