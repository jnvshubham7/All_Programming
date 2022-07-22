#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

ll t;
cin>>t;
ll m=t-1;
vector<ll> v;

ll a[m];
ll b[m];


//take input
for(ll i=0;i<m;i++){
cin>>a[i];
}
for(ll i=0;i<m;i++){
cin>>b[i];
}




    // ll a[m];
    // for(int i=0;i<m;i++){
    //     cin>>a[i];
    // }

    //print the array
    // for(int i=0;i<m;i++){
    //     cout<<a[i]<<" ";
    // }
    //store all in vector
    // vector<ll> v;


    for(ll i=0;i<m;i++){
        v.push_back(a[i]);
    }
    for(ll i=0;i<m;i++){
        v.push_back(b[i]);
    }



    // for(int i=0;i<m;i++){
    //     v.push_back(a[i]);
    // }


   


    



//print all the elements of the vector
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

//check how many single tree can be formed
//sort the vector
sort(v.begin(),v.end());

//check how many single tree can be formed

//check how many single tree can be possible 



//You has these options {},{0},{1},{2},{0,1},{1,2},{0,2}, {0,1,2}. 
//Out of these, only 7 are valid trees as {0,2} does not form a single tree.

//single tree means that all element are connected like as increasing order
//check how many node is connected 


//split the vector into all possible sub vector

//and store in different vector







    return 0;
}