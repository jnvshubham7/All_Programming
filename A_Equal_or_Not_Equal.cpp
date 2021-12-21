#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		int ans=0;
		for(int i=0;i<a.size();i++)
		{
			if(a[i]=='N')
			ans++;
 
		}
		if(ans==1)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
}