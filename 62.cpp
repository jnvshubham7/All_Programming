#include <bits/stdc++.h> 
using namespace std;

int main() {
     freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
	int a,b,c;
     cin>>a>>b>>c;
     if(a<b && a<c){
          cout<<b+c<<endl;
     }
     else if(b<a && b<c){
          cout<<a+c<<endl;
     }
     else {
          cout<<a+b;
     }
	return 0;
}
