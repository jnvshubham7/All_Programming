#include<bits/stdc++.h>
using namespace std;
#define ll long long


//create a function for palindrome check in binary string

string palindrome(string s){
    string rev="";
    for(int i=s.length()-1;i>=0;i--){
        rev+=s[i];
    }
    return rev;
}




int main(){

int t;
cin>>t;
while(t--){

    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    //print reverse of the string
    string rev=palindrome(s);
   //  cout<<rev<<endl;

int flag=true;
    
//if k<1 and string is not palindrome then print -1
    if(k<1 && s!=rev){
        cout<<"NO"<<endl;
    }
   
   //check if we do k number of operation in string then posible to make palindrome
    else if(k>=1 && s==rev){
        cout<<"YES"<<endl;
    }

     //create two loop check every string create from flip 0 to 1 and 1 to 0 
    else{
        for(int i=0;i<s.length();i++){
            for(int j=0;j<s.length();j++){
                string temp=s;
                temp[i]=s[j];
                temp[j]=s[i];
                if(palindrome(temp)==rev){
                    cout<<"YES"<<endl;
                    flag=false;
                    break;
                }
            }
            if(flag==false){
                break;
            }
        }
        if(flag==true){
            cout<<"NO"<<endl;
        }

    }
    // else{
    //     for(int i=0;i<s.length();i++){
    //         for(int j=0;j<s.length();j++){
    //             string temp=s;
    //             temp[i]=s[j];
    //             temp[j]=s[i];
    //             if(temp==palindrome(temp)){
    //                 flag=false;
    //                 break;
    //             }
    //         }
    //     }
    //     if(flag){
    //         cout<<"NO"<<endl;
    //     }
    //     else{
    //         cout<<"YES"<<endl;
    //     }
    // }






    //check every string create from flip 0 to 1 and 1 to 0 
    // else{
    //     for(int i=0;i<s.length();i++){
    //         string temp=s;
    //         if(temp[i]=='0'){
    //             temp[i]='1';
    //         }
    //         else{
    //             temp[i]='0';
    //         }
    //         //check if temp is palindrome
    //         if(temp==palindrome(temp)){
    //             //check if we can do k-1 operation
    //             if(k-1>=0){
    //                 cout<<"YES"<<endl;
    //                 flag=false;
    //                 break;
    //             }
    //             else{
    //                 cout<<"NO"<<endl;
    //                 flag=false;
    //                 break;
    //             }
    //         }
    //     }
    //     if(flag){
    //         cout<<"NO"<<endl;
    //     }
    // }

    //if k>=1 and string is not palindrome then check if we can make it palindrome by doing k number of operation
    // else if(k>=1 && s!=rev){
    //     //check if we can make it palindrome by doing k number of operation
    //     int count=0;
    //     for(int i=0;i<s.length();i++){
    //         if(s[i]=='0'){
    //             s[i]='1';
    //             count++;
    //         }
    //         else{
    //             s[i]='0';
    //             count++;
    //         }
    //         if(count==k){
    //             break;
    //         }
    //         else{
    //             flag=false;
                
    //         }
    //     }

    //    // cout<<s<<endl;
    //   // cout<<palindrome(s)<<endl;
    //   if(s==palindrome(s)){
    //       cout<<"YES"<<endl;
    //   }

    //     //check if we can make it palindrome by doing k number of operation
    //     // if(s==rev){
    //     //     cout<<"YES"<<endl;
    //     // }
    //     else if(flag==false){
    //         cout<<"NO"<<endl;
    //     }
    // }




    // else{
    //     //check if we can make string palindrome by doing k number of operation
    //     //if yes then print YES
    //     //if no then print NO
    //     int count=0;
    //     for(int i=0;i<s.length();i++){
    //         if(s[i]!=rev[i]){
    //             count++;
    //         }
    //     }
    //     if(count<=k){
    //         cout<<"YES"<<endl;
    //     }
    //     else{
    //         cout<<"NO"<<endl;
    //     }
    // }


   

}

    return 0;
}