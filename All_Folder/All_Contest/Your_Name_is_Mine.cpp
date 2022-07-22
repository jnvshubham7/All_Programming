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


  bool isSubsequence(string s, string t) {

      int i=0,j=0;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
            i++;
            }
            j++;
        }
        if(i==s.size()){
            return true;
        }
        else{
            return false;
        }
        
        
    }
int main(){
ll t;
cin>>t;
while(t--){

    string s1,s2;
    cin>>s1>>s2;


    if(isSubsequence(s1,s2) || isSubsequence(s2,s1)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    // int ans=0;

   

    // ans+=isSubsequence(s1,s2);
    // ans+=isSubsequence(s2,s1);

    // if(ans!=0)
    // {
    //     cout<<"YES"<<endl;
    // }
    // else {
    //     cout<<"NO"<<endl;
    // }
   

    

}

  
  

    return 0;
}