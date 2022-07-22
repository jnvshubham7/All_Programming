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

    int n,m,k;
	    cin>>n>>m>>k;
	    int arr[n];
	    int cnt=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]==1){
	            cnt++;
	        }
	    }
	    if(cnt == n){
	        cout<<"100"<<endl;
	    }
	    else{
	        int num=0;
	        for(int j=0;j<m;j++){
	            if(arr[j]==1){
	                num++;
	            }
	        }
	        if(num == m){
	            cout<<k<<endl;
	        }
	        else{
	            cout<<"0"<<endl;
	        }
	    }

}

    return 0;
}