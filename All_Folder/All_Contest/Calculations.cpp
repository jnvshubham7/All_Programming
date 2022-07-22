#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
ll n;
cin>>n;

//t(n)=t(n-1)+t(n-2) + t(n-3);  
//n>3  t(1)=3, t(2)=2, t(3)=1

//s=(t(1)^2+ t(2)^2 + . .... + t(n)^2)

//calculate s for n 

// t(1)=3, t(2)=2, t(3)=1
//t(n)=t(n-1)+t(n-2) + t(n-3);  apply this formula
//t(n)=t(n-1)+t(n-2) + t(n-3);

// t(1)=3, t(2)=2, t(3)=1
//t(4)=t(3)+t(2)+t(1)
//t(5)=t(4)+t(3)+t(2)
//t(6)=t(5)+t(4)+t(3)


//store all t(1) to t(n) in a vector
//vector<ll> v;

// ll  t(1)=3 ;
// ll t(2)=2 ;
// ll t(3)=1;   


//store t(1) to t(n) in a vector which apply formula t(n)=t(n-1)+t(n-2) + t(n-3);




//store t(1) to t(n) in a unordered map which apply formula t(n)=t(n-1)+t(n-2) + t(n-3) with index










































unordered_map<ll,ll> m;



for(ll i=1;i<=n;i++){
    if(i==1){
        m[i]=3;
    }
    else if(i==2){
        m[i]=2;
    }
    else if(i==3){
        m[i]=1;
    }
    else{
        m[i]=m[i-1]+m[i-2]+m[i-3];
    }
   
}



ll s=0;
for(ll i=1;i<=n;i++){
    //all place modulo 10^9+7
   
    s=(s+m[i]*m[i])%1000000007;
}

//print s modulo 10^9+7
cout<<s%(1000000007)<<endl;

















//print the map
// for(auto it=m.begin();it!=m.end();it++){
//     cout<<it->first<<" "<<it->second<<endl;
// }



//calculate s for n

// if(n>3){
//     ll s=0;
//     for(ll i=1;i<=n;i++){
//         s=s+m[i]*m[i];
//     }
//    // cout<<s<<endl;
// }
// else{

    //coutn s for 3 elements
    // ll s=0;
    // for(ll i=1;i<=n;i++){
    //     s=s+m[i]*m[i];
    // }

    // for(ll i=1;i<=n;i++){
    //     cout<<m[i]<<" ";
    // }
   
//}












// for(ll i=1;i<=n;i++){
//     if(i==1){
//         m.push_back(3,i);
//     }
//     else if(i==2){
//         v.push_back(2);
//     }
//     else if(i==3){
//         v.push_back(1);
//     }
//     else{
//         v.push_back(v[i-1]+v[i-2]+v[i-3]);
//     }
// }

//unordered_map<ll,ll> m;

//PRINT VECTOR
// for(ll i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }


//calculate s for n
// ll s=0;
// for(ll i=0;i<n;i++){
//     s=s+v[i]*v[i];
// }

// //print s
// cout<<s<<endl;


// for(ll i=1;i<=n;i++){
//     v.push_back(i);
// }






    return 0;
}