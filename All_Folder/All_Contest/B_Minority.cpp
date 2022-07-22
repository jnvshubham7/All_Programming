#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    string s;
    cin>>s;

    //choose a consecutive substring of s 




























    // int n=s.length();   
    // int ans=0;
    // for(int i=0;i<n;i++){
    //     int j=i;
    //     int k=i;
    //     while(j<n && k<n){
    //         if(s[j]=='0'){
    //             j++;
    //             k++;
    //         }
    //         else{
    //             if(s[j]=='1' && s[k]=='1'){
    //                 j++;
    //                 k++;
    //             }
    //             else{
    //                 break;
    //             }
    //         }
    //     }
    //     if(j==n && k==n){
    //         ans=1;
    //         break;
    //     }
    // }
    // if(ans==1){
    //     cout<<s<<endl;
    // }
    // else{
    //     cout<<"0"<<endl;
    // }

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    //and remove all occurrences of the character, which is a strict minority in it, from the substring.

    // int n=s.length();
    // int count=0;
    // int i=0;
    // while(i<n){
    //     if(s[i]=='0'){
    //         count++;
    //     }
    //     i++;
    // }
    // if(count==n){
    //     cout<<s<<endl;
    // }
    // else{
    //     int j=0;
    //     while(j<n){
    //         if(s[j]=='0'){
    //             s.erase(j,1);
    //             n--;
    //         }
    //         else{
    //             j++;
    //         }
    //     }
    //     cout<<s<<endl;
    // }
//}









    //check 0 occurence and 1 occurence
    int zero=0,one=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            zero++;
        }
        else if(s[i]=='1'){
            one++;
        }
    }
    if(zero==0 || one==0 || zero==one){
        cout<<"0"<<endl;
    }
    else if(zero>one){
        cout<<one<<endl;
    }
    else{
        cout<<zero<<endl;
    }


       
    



}

    return 0;
}