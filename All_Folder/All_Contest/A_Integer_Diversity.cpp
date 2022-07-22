#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int h[101]={0};
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			a[i] = abs(a[i]);
			h[a[i]]++;
		}
		int ans=0;
		for(int i=0;i<101;i++){
			if(h[i]>=2)
				ans+=2;
			
			else if(h[i]==1)
				ans+=1;
		}
		if(h[0]>1)
			ans -=1;
		cout<<ans<<endl;
	}
} 