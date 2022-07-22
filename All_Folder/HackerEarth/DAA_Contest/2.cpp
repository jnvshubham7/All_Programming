#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	ll t;
	cin>>t;
	vector<int> s;
	while(t--){
		ll n;
		cin>>n;
		while(n--){
			ll m;
			cin>>m;

			for(int i=0;i<m;i++){
				int x;
				cin>>x;
				s.push_back(x);
			}
		//	ll a[m];

			// for(int i=0;i<m;i++){
			// 	cin>>a[i];
			// 	s.push_back(a[i]);

			// }

			// for(int i=0;i<m;i++){
			// 	s.push_back(a[i]);

			// }


		}


        	sort(s.begin(),s.end());

	for(int i=0;i<s.size(); i++){
		cout<<s[i]<<" ";

	}

	cout<<endl;
	}



	

	// for(auto it=s.begin();it!=s.end();it++){
	// 	cout<<*it<<" ";

	// }

	// cout<<endl;
	return 0;
}