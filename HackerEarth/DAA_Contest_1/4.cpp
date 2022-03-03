#include<bits/stdc++.h>
using namespace std;

int n,m;

void solve(vector<vector<int>> a,int i,int j,int ans,int &res) {
	if(i==n-1 && j==m-1) {
		res=min(res,ans);
		return;
	}

	if(i+1<n) solve(a,i+1,j,ans+abs(a[i][j]-a[i+1][j]),res);
	if(j+1<m) solve(a,i,j+1,ans+abs(a[i][j]-a[i][j+1]),res);
	if(i+1<n && j+1<m) solve(a,i+1,j+1,ans+abs(a[i][j]-a[i+1][j+1]),res);
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>n>>m;
		vector<vector<int>> a(n);
		for(int i=0;i<n;i++){
			a[i].assign(m,0);
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int res=INT_MAX;
		solve(a,0,0,0,res);
		cout<<res<<endl;
	}
	return 0;
}