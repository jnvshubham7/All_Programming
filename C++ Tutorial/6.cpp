#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
    fileio;

    vector<int> v={2,4,2,5,1};
    cout<<v.back()<<"\n"; 
    v.pop_back();
    cout<<v.back()<<endl;

    return 0;
}