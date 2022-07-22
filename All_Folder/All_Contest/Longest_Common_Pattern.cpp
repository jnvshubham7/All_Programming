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

 ll lcs(string text1, string text2) {

     ll i=0,j=0;

     return 0;

     //two pointers
    
        
    }

int main(){
ll t;
cin>>t;
while(t--){

    string s1,s2;
    cin>>s1>>s2;
    sort(all(s1));
    sort(all(s2));

    int n1=s1.size();
    int n2=s2.size();
    int cnt=0;

    ll i=0,j=0;
    while(i<n1 && j<n2){
        if(s1[i]==s2[j]){
            cnt++;
            i++;
            j++;
        }
        else if(s1[i]<s2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    cout<<cnt<<endl;
    
   

   
   
}


    return 0;
}