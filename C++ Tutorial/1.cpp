#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
    fileio;

    set<string> s;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        string str;
        cin>>str;
        s.insert(str);

    }
    for(auto value : s){
        cout<<value<<endl;
    }

    return 0;
}