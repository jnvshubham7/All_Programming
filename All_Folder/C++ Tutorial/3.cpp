#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
   fileio;

    unordered_set<string> s;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        string str;
        cin>>str;
        s.insert(str);

    }
    int q;
    cin>>q;
    while(q--){
        string str;
        cin>>str;
        if(s.find(str) == s.end()){
            cout<<"no\n";

        }else{
            cout<<"yes\n";
        }
    }
    
}