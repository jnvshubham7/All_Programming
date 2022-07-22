#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
  //  fileio;
    string s;
    cin>>s;
   int a,b;
    cin>>a>>b;
    int n=s.size();
    //Swap the a-th and b-th characters from the beginning of S and print the resulting string.

    for(int i=0;i<n;i++){

        //Swap the a-th and b-th characters from the beginning of S and print the resulting string.
        if(i==a-1){
            char temp=s[i];
            s[i]=s[b-1];
            s[b-1]=temp;
        }
        // if(i==a){
        //     swap(s[i],s[b]);
        // }
        // else if (i==b){
        //     swap(s[i],s[a]);
        // }
    //     {
            
    //     }
    //  char temp=s[a];
    // s[a]=s[b];
    // s[b]=temp;
       
    }
   


   // swap(s[a],s[b]);
    
    cout<<s<<endl;

    

    return 0;
}