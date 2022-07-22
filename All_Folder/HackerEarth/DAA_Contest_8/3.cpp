#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll shu, head;
vector <vector <ll>> adj(300005);
vector <ll> tti(300005), dist(300005, 0);
ll shubham = 0;
void dfs(ll node, ll par){

	for(ll i : adj[node]){
		if(i != par){
			dist[i] = dist[node] + tti[node];
			shubham = max(shubham, dist[i]);
			dfs(i, node);
		}
	}
	return;
}
int main(){
	int test_case;
	cin >> test_case;
	while(test_case--){
		shubham = 0;
		cin >> shu >> head;
		for(ll i = 0; i < shu; i++) adj[i].clear();
		tti.assign(shu, 0);
		dist.assign(shu, 0);
		for(ll i = 0; i < shu; i++){
			ll p;
			cin >> p;
			if(p == -1) continue;
			else{
				adj[p].push_back(i);
				adj[i].push_back(p);
			}
		}
		for(ll i = 0; i < shu; i++){
			cin >> tti[i];
		}
		dfs(head, -1);
		cout << shubham << endl;
	}
}