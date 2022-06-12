#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
string s;
cin>>s;

//first check h is present in the string then check e is present in the string so on of hello

int flag=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='h'){
        //delete the all the char from the string which is before h
        s.erase(0,i);

        flag=1;
        break;
    }
}
if(flag==1){
    flag=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='e'){
            //delete the all the char from the string which is before e
            s.erase(0,i);
            flag=1;
            break;
        }
    }
}
    if(flag==1){
    flag=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='l'){
            //delete the all the char from the string which is before l and also l
            s.erase(0,i+1);
            //s.erase(0,i);
            flag=1;
            break;
        }
    }
    }

    if(flag==1){
    flag=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='l'){
            //delete the all the char from the string which is before e
            s.erase(0,i);
            flag=1;
            break;
        }
    }
    }
    if(flag==1){
    flag=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='o'){
            //delete the all the char from the string which is before e
            s.erase(0,i);
            flag=1;
            break;
        }
    }
    }



    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }





//store index of every char of hello  in a vector
// vector<int> v;
// for(int i=0;i<s.size();i++){
//     if(s[i]=='h'){
//         v.push_back(i);
//     }
// }

//store index of every char of h e l l o  in a vector
















// int flag=0;
// for(int i=0;i<s.size();i++){
//     if(s[i]=='h'){
//         if(s[i+1]=='e'){
//             if(s[i+2]=='l'){
//                 if(s[i+3]=='l'){
//                     if(s[i+4]=='o'){
//                         flag=1;
//                         break;
//                     }
//                 }
//             }
//         }
//     }
// }

    // if(flag==1){
    //     cout<<"YES"<<endl;
    // }
    // else{
    //     cout<<"NO"<<endl;
    // }

    return 0;
}