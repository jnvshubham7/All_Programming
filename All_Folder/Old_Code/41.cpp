#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
int n,s;
cin>>n>>s;
if(n=s){
    cout<<n<<endl;
}
else if(n>s){
    cout<<"0"<<endl;
}
    }
return 0;
    }