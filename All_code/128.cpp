#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
    fileio;

    vector<int> v;

    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
       
    }

    for(auto i=v.begin();i!=v.end();i++){
        cout<<*i<<" ";
    }


    return 0;
}