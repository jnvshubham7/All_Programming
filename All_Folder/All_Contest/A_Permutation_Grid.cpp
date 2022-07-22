#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;
int main(void){
	int n,q,i,x,y;
	vector<int> r,c;
	cin >> n;
	r.resize(n);
	c.resize(n);
	for(i=0;i<n;i++) cin >> r[i];
	for(i=0;i<n;i++) cin >> c[i];
	cin >> q;
	for(i=0;i<q;i++){
		cin >> x >> y;
		x--; y--;
		if(r[x]+c[y] <= n) cout << '.';
		else cout << '#';
	}
	cout << '\n';
}
