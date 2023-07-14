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


string alph = "0abcdefghijklmnopqrstuvwxyz";

int main(){
ll t;
cin>>t;
while(t--){

    int k;
    cin>>k;

    string str;
    cin>>str;


       string ans="";
    int n = str.size();
    
    for(int i=n-1; i>=0; i--)
    {
        if(str[i]=='0' && i>=2)
        {
               // string temp = "";
                char ch1 = str[i-1];
                char ch2= str[i-2];
                // cout<<ch1<<" "<<ch2<<endl;
                int aa = ch1-'0';

                int bb = ch2-'0';
                int cc = bb*10 + aa;
                char chh = alph[cc];
				// cout<<chh<<endl;
                ans += chh;
                i--;
				i--;
        }
        else{
            int tt = str[i]-'0';
            char chdh = alph[tt];
            ans += chdh;
        }
    }
	reverse(ans.begin(),ans.end());
    cout<<ans<<endl;


   

}

    return 0;
}