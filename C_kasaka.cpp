#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){

string s;
cin>>s;


int flag=0;
//one time one 'a' char add to the begining of the string
for(int i=0;i<s.size();i++){
    if(s==string(s.rbegin(),s.rend())){
flag=1;
break;
   
}
else {
    s.insert(0,1,'a');
    i++;

}


//s.insert(0,1,'a');
// if(s==string(s.rbegin(),s.rend())){
// flag=1;
// break;
   
// }
// else{
//     continue;
// }
//flag=0;

}


if(flag==1){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
//then check if the string is palindrome or not
// if(s==string(s.rbegin(),s.rend())){
//     cout<<"YES"<<endl;
// }
// else{
//     cout<<"NO"<<endl;
// }




























//check s is palindrome or not
// bool flag=true;
// for(int i=0;i<s.size()/2;i++){
//     if(s[i]!=s[s.size()-1-i]){
//         flag=false;
//         break;
//     }
// }
//print yes
// if(flag){
//     cout<<"Yes"<<endl;
// }

//one time 'a' is added to the end of the string and then check if it is palindrome or not

























// //push every char of s to vector 
// vector<char> v;
// for(int i=0;i<s.size();i++){
//     v.push_back(s[i]);
// }
// //reverse the vector
// reverse(v.begin(),v.end());
//print the vector
// for(int i=0;i<v.size();i++){
//     cout<<v[i];
// }
//








//one time 'a' char push to vector then check if it is palindrome or not
// vector<char> v;
// for(int i=0;i<s.size();i++){
//     if(s[i]=='a'){
//         v.push_back(s[i]);
//     }






//adding some number of a's (possibly zero) at the beginning of S
//and check if it is a palindrome   
// int ans=0;
// for(int i=0;i<s.size();i++){
//     if(s[i]=='a'){
//         ans++;
//     }
//     else{
//         break;
//     }
// }
// if(flag){
//     cout<<ans<<endl;
// }
// else{
//     cout<<-1<<endl;
// }

//


// reverse(s.begin(),s.end());




























    //push string to vector










//cout<<s<<endl;
//

int n=s.size();

//adding some number of a's (possibly zero) at the end of S
//check if the string is palindrome





// //reverse string
// string rev="";
// for(int i=sz(s)-1;i>=0;i--){
//     rev+=s[i];
// }

//add a in front of rev



























//print reversed string
//cout<<rev<<endl;
//we add many a's to the end of the string to make it palindrome





// for(int i=0;i<26;i++){
//     string temp=rev;
//     temp[0]=(char)(i+97);
//     if(temp==s){
//         cout<<"YES"<<endl;
//         return 0;
//     }
// }
// cout<<"NO"<<endl;





    return 0;
}