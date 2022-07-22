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

    string s1,s2;
    cin>>s1>>s2;

    int n1=s1.size();
    int n2=s2.size();
    int flag=0;

    for(int i=0;i<n1;i++){
       for(int j=0;j<n2;j++){
           if(s1[i]==s2[j]){
              cout<<"Yes"<<endl;
            flag=1;
              break;
           }
       }
      if(flag==1)break;
    }

    if(flag==0)cout<<"No"<<endl;

    // unordered_map<char,int> m1,m2;
    // fr(i,n1){
    //     m1[s1[i]]++;
    // }
    // fr(i,n2){
    //     m2[s2[i]]++;
    // }
    
    // bool flag=false;

    

    // if(flag){
    //     cout<<"No"<<endl;
    // }
    // else{
    //     cout<<"Yes"<<endl;
    // }



   // int i=0,j=0;

    //int flag=0;

    // while(i<n1 && j<n2){
    //     if(s1[i]==s2[j]){
    //        flag=1;
    //        break;
    //         i++;
    //         j++;
    //     }
    
    //     else{
    //         i++;
    //     }
    //     if(flag)
    //     {
    //         break;
    //     }
    // }

    // if(flag){
    //     cout<<"Yes"<<endl;
    // }
    // else{
    //     cout<<"No"<<endl;
    // }

    
    


    



}


    return 0;
}