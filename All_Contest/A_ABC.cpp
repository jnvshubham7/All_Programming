#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
    string s;
    cin>>s;


    //check palindromes of length greater than 1 is present in string 

   // int flag=0;

   //check count 0 and 1 how many times occur in the string
    int count0=0;    
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            count0++;
        }
    }

     int count1=0;    
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            count1++;
        }
    }
//if s.size <= 2 then print "NO"
    if(n<=2){
        //
        if(s[0]=='0' && s[1]=='1'){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
       // cout<<"Yes"<<endl;
    }
//check if the string is palindrome or not
   else  if(count0==count1){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
   





   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
    // int flag=0;
    // if(s==string(s.rbegin(),s.rend())){
    //     flag=1;
    // }
    // else{
    //     flag=0;
    // }


    // cout<<flag<<endl;
   

    





    //scan the string
    // for(int i=0;i<n;i++){
    //     cin>>s[i];
    // }
    //print the string
    // for(int i=0;i<n;i++){
    //     cout<<s[i]<<endl;
    // }

   // cout<<s<<endl;
    //check palindrome or not
    // if(s==string(s.rbegin(),s.rend())){
    //     cout<<"YES"<<endl;
    // }
    // else{
    //     cout<<"NO"<<endl;
    // }








    //if s.size <= 2 then print "NO"
    // if(n<=2){
    //     cout<<"Yes"<<endl;
    // }









    


}

    return 0;
}