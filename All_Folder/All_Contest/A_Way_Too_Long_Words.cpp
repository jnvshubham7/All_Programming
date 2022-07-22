#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

    string s;
    cin>>s;



    if(s.size()>10 && s.size()<=100){
        //print first char ,string size and last char
        cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
        }
   

    else{
        cout<<s<<endl;
        
       
    }

}

    return 0;
}