#include <bits/stdc++.h> 
using namespace std;

int main() {
     freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
	
     int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
			
		}
	
			int k=sum/n;
			
		if(k<1 || k==0) 
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<sum-n<<endl;
		}
	}
	
}
