#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int n,x;
    cin>>n>>x;
    int a[n];

    //input
    //take input
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    //store x+a[i]+a[i+1]+ ... +a[n-1] and store every sum in unordered_map

    
    unordered_map<int, int> m;

    //every time sum store in unordered_map
    //store sum=x+a[i] in unordered_map then sum=x+a[i]+a[i+1] in unordered_map and so on
    //if sum is already in unordered_map then increment count
    //if sum<0 then break


    //first intialize sum=x which also is in unordered_map
 

    //loop for sum
    // for(int i=0; i<n; i++){
    //     //sum=x+a[i]
    //     int sum=x+a[i];
    //     //if sum is already in unordered_map then increment count
    //     if(m.find(sum)!=m.end()){
    //         m[sum]++;
    //     }
    //     //if sum<0 then break
    //     else if(sum<0){
    //         break;
    //     }
    //     //if sum is not in unordered_map then store sum in unordered_map
    //     else{
    //         m[sum]=1;
    //     }
    // }


    int sum=x;
    for(int i=0; i<n; i++){

        sum+=a[i];
        if(m.find(sum)==m.end()){
            m[x]=1;
            m[sum]=2;
        }
        else{
            m[sum]++;
        }
        if(sum<0){
            break;
        }
    }

    //print count
    //cout<<m[x]<<endl;


    // for(int i=0; i<n; i++){
    //     int sum=x;
    //     for(int j=i; j<n; j++){
    //         sum+=a[j];
    //         m[sum]++;
           
    //     }
    // }


    // unordered_map<int, int> m;
    // int sum=x;
    // for(int i=0; i<n; i++){
    //     sum=sum+a[i];
    //     m[sum]=1;
    // }
   // print map
    // for(auto it=m.begin(); it!=m.end(); it++){
    //     cout<<it->first<<" ";
    // }
    // cout<<endl;

    //find max
    int max=0;
    for(auto it=m.begin(); it!=m.end(); it++){
        if(it->first>max){
            max=it->first;
        }
    }
    //print max
    cout<<max<<endl;



}

    return 0;
}