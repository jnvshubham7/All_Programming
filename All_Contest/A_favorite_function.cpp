#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int m,n;
    cin>>m>>n;
  //  store the number of divisors of each number from m to n in unordered_map
    unordered_map<int,int> mp;
    for(int i=m;i<=n;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        mp[i]=count;
    }
    //print count
    // for(auto it=mp.begin();it!=mp.end();it++){
    //     cout<<it->second<<" ";
    // }

    //store frequency of each number in unordered_map
    unordered_map<int,int> mp1;
    for(auto it=mp.begin();it!=mp.end();it++){
        mp1[it->second]++;
    }
    //print one most frequency  and one least frequency
    int max=0,min=INT_MAX;
    for(auto it=mp1.begin();it!=mp1.end();it++){
        if(it->second>max){
            max=it->second;
        }
        if(it->second<min){
            min=it->second;
        }
    }
    cout<<max<<" "<<min<<endl;
    // int max1=0,max2=0;
    // for(auto it=mp1.begin();it!=mp1.end();it++){
    //     if(it->second>max1){
    //         max2=max1;
    //         max1=it->second;
    //     }
    //     else if(it->second>max2){
    //         max2=it->second;
    //     }
    // }
    //  cout<<max1<<" "<<max2<<endl;
    // for(auto it=mp1.begin();it!=mp1.end();it++){
    //     cout<<it->second<<" ";
    // }


    // //print which number in maximum frequency in map 
    // int max=0;
    // for(auto it=mp.begin();it!=mp.end();it++){
    //     if(it->second>max){
    //         max=it->second;
    //     }
    // }
    // for(auto it=mp.begin();it!=mp.end();it++){
    //     if(it->second==max){
    //         cout<<it->first<<" ";
    //     }
    // }
    // cout<<endl;

}

    return 0;
}