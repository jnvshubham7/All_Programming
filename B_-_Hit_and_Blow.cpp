#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

ll n;
cin>>n;

ll a[n],b[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
}
for(ll i=0;i<n;i++){
    cin>>b[i];
}

//check same elemet in a and b at same position count++
ll count=0;
for(ll i=0;i<n;i++){
    if(a[i]==b[i])
        count++;
}

//check how many element in a and b are same
ll same=0;
for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++){
        if(a[i]==b[j])
            same++;
    }
}

cout<<count<<endl;
//smae -count
cout<<same-count<<endl;







    return 0;
}