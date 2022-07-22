#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
    fileio;

    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout<<v.top<<endl;
    // int ans=0;
    // for(int i=0;i<n;i++){
    //     ans+=v[i];
    // }
    // cout<<ans;



    return 0;
}