#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int x,a,b,c;
    cin>>x>>a>>b>>c;
    //store two min value in vector from a,b,c
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    sort(v.begin(),v.end());
    //erase max value from vector
    v.erase(v.begin()+2);

  //print vector
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;


int sum=(x-1)*v[0]+v[1];
cout<<sum<<endl;


}

    return 0;
}