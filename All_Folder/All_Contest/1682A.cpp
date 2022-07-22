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
    string s;
    cin>>s;

           int count = 0;
 
        for (int i = (n - 1) / 2; i >= 0; i--)
        {
            if (s[i] == s[i+1])
               
            {
                count++;
            }
           else {
                break;
           }
        }
 
        if (n % 2 == 0)
        {
             cout << (2*count) << endl;

        }
           
          else
          {  
            if(n-1==count){
                cout<<n<<endl;
            }
                cout << (2*count+1) << endl;
            
          }
   
  

}




    return 0;
}