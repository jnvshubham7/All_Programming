#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(x) push_back(x)
#define mk(a,b) make_pair(a,b)
#define F first
#define S second
#define mod 1000000007
void io(){

	  freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    
}
ll dfa = 0;
ll q0(char c){
	cout<<"currently on state 0\n";
	if(c=='a')dfa = 1;
	else dfa = 0;
	return dfa;
}

ll q1(char c){
	cout<<"currently on state 1\n";
	if(c=='a')dfa = 1;
	else dfa = 2;
	return dfa;
}

ll q2(char c){
	cout<<"currently on state 2\n";
	if(c=='a')dfa = 3;
	else dfa = 0;
	return dfa;
}

ll q3(char c){
	cout<<"currently on state 3\n";
	dfa = 3;
	return dfa;
}

int main(){
	io();
	string s; cin>>s;
	ll n = s.length();
	for(ll i=0;i<n;i++){
		if(dfa==0) q0(s[i]);
		else if(dfa==1)q1(s[i]);
		else if(dfa==2)q2(s[i]);
		else q3(s[i]);
	}
	cout<<endl;
	if(dfa==3)cout<<"yes\n";
	else cout<<"no\n";
	return 0;
}