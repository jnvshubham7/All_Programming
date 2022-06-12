#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    ll n;
    cin>>n;

    ll m=2*n;
    ll a[m];

      int sum=0;

    for(int i=0;i<m;i++){
        cin>>a[i];
         sum+=a[i];
    }

  
    for(int i=0;i<m;i++){
       
    }
    //if sum %2==0 then yes
    if(sum%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }






    //


    
//change all negative elements to positive
    // for(int i=0;i<m;i++){
    //     if(a[i]<0){
    //         a[i]=-a[i];
    //     }
    // }

    //check all elements are equal
    // bool flag=true;
    // for(int i=0;i<m;i++){
    //     if(a[i]!=a[0]){
    //         flag=false;
    //         break;
    //     }
    // }

    //sort the array
//sort(a,a+m);
    //print the array
    // for(int i=0;i<m;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;


    //print array
    // for(int i=0;i<m;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;

    //if  all elements are equal then print yes
  
  
    // bool flag=true;
    // for(int i=0;i<m;i++){
    //     if(a[i]!=a[0]){
    //         flag=false;
    //         break;
    //     }
    // }
    // if(flag){
    //     cout<<"yes1"<<endl;
    //     continue;
    // }
    //store occurences of each element in a map
    // map<ll,ll> m1;
    // for(int i=0;i<m;i++){
    //     m1[a[i]]++;
    // }
    //check if all elements are equal
    // bool flag=true;
    // for(auto it=m1.begin();it!=m1.end();it++){
    //     if(it->second!=1){
    //         flag=false;
    //         break;
    //     }
    // }

    //if in only even occurences then print yes
    // bool flag1=true;
    // for(auto it=m1.begin();it!=m1.end();it++){
    //     if(it->second%2!=0){
    //         flag1=false;
    //         break;
    //     }
    // }

    //check size of map 
    //  int size=m1.size();
    //  cout<<size<<endl;


//     if(flag){
//         cout<<"YES"<<endl;
//         continue;
//     }

//  else if(flag1){
//         cout<<"YES"<<endl;
//         continue;
//     }
//     else {
//         cout<<"NO"<<endl;
//     }












    //store occurences of each element in a map which same element is with -ve sign and +ve sign
    // map<ll,ll> m2;
    // for(int i=0;i<m;i++){
    //     if(a[i]>0){
    //         m2[a[i]]++;
    //     }
    //     else{
    //         m2[-a[i]]++;
    //     }
    // }

    // //print m2
    // for(auto it=m2.begin();it!=m2.end();it++){
    //     cout<<it->first<<endl;
    // }
  



    //if in only even occurences then print yes
    // bool flag2=true;
    // for(auto it=m2.begin();it!=m2.end();it++){
    //     if(it->second%2!=0){
    //         flag2=false;
    //         break;
    //     }
    // }
//    if(flag2){
//         cout<<"yes3"<<endl;
//         continue;
//     }

    // if(flag==true || flag1==true || flag2==true){
    //     cout<<"yes"<<endl;
    // }
    // else{
    //     cout<<"no"<<endl;
    // }





    

}

    return 0;
}