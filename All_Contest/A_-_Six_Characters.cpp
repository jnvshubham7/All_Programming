#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
string s;
cin>>s;
int n=s.size();

int m=6/n;

//make new string which m times of s
string s1="";
for(int i=0;i<m;i++){
    s1+=s;
}

cout<<s1<<endl;







    return 0;
}