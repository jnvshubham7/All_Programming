#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
   // fileio;

    int t;
    cin>>t;
    while(t--){


	int n,i;
		cin>>n;
		int a[n],b[n];
		int ans=0;
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			cin>>b[i];
		for(i=0;i<n;i++)
		{
			ans=max(ans,20*a[i]-10*b[i]);
		}
		cout<<ans<<endl;
	}

    return 0;
}