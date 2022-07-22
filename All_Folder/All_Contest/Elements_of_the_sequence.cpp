#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
   int m=2*n;
   int a[m];

   //take input
    for(int i=0;i<m;i++){
         cin>>a[i];
    }
    //sort
    sort(a,a+m);
    //print
    // for(int i=0;i<m;i++){
    //     cout<<a[i]<<" ";
    // }

    //check a[0]
    //if the input sequence can be divided into pairs such that the sums of these pairs are the same. Otherwise, print NO.
  //store sum like as a[0]+a[m] and a[1]+a[m-1] and so on in a vector
    vector<int> v;
    for(int i=0;i<m;i++){
        v.push_back(a[i]+a[m-1-i]);

       

    }

    //check all elements of the vector is same or not
    int flag=0;
    for(int i=0;i<m;i++){
        if(v[i]!=v[0]){
            flag=1;
            break;
        }
    }
    if(flag==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    //check all the pairs in the vector and if any pair is found then print YES else NO
    // for(int i=0;i<m;i++){
    //     for(int j=i+1;j<m;j++){
    //         if(v[i]==v[j]){
    //             cout<<"YES"<<endl;
    //         // return 0;
    //         break;
    //         }
    //     }
    // }
    // cout<<"NO"<<endl;

    //check if the vector contains the same sum
   // sort(v.begin(),v.end());
   // int flag=0;

    //check same sum
    //check all the elements in the vector same or not
    // for(int i=0;i<v.size()-1;i++){
    //     if(v[i]==v[i+1]){
    //         flag=1;
    //        // break;
    //     }
    //     else {
    //         flag=0;
    //     }
    // }
    // if(flag==1) cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;
    
    // for(int i=0;i<v.size()-1;i++){
    //     if(v[i]==v[i+1]){
    //         flag=1;
    //         break;
    //     }
    // }
    // if(flag==1) cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;

    //print vector
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;


  


}

    return 0;
}