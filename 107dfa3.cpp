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
ll dfa = 0 ;
ll q0(char c){
	cout<<"currently on state 0\n";
	if(c=='a')dfa = 1;
	else dfa = 0;
	return dfa;
}
ll q1(char c){
	cout<<"currently on state 1\n";
	if(c=='a')dfa = 0;
	else dfa = 1;
	return dfa;
}

int main(){
	io();
	string s; cin>>s;
	for(ll i=0;i<s.length();i++){
		if(dfa == 0)q0(s[i]);
		else q1(s[i]);
	}
	cout<<endl;
	if(dfa==0)cout<<"yes\n";
	else cout<<"no\n";
	return 0;
}