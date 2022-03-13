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


    //store in vector
  //every char from string to vector
    vector<char> v;
    for(int i=0;i<s.size();i++){
        v.push_back(s[i]);
    }
    //print vector
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;



//check if v[i]==v[i+1] then erase v[i] and v[i+1] and push v[i] in different vector
    vector<char> v1;

    for(int i=0;i<v.size();i++){
        if(i==v.size()-1){
            v1.push_back(v[i]);
        }
        else if(v[i]==v[i+1]){
             v1.push_back(v[i]);
            v.erase(v.begin()+i);
           // v.erase(v.begin()+i);
          //  v1.push_back(v[i]);
           // i=i-2;
        }

        else {
            v1.push_back(v[i]);

        }
    }

    //print vector
    // for(int i=0;i<v1.size();i++){
    //     cout<<v1[i]<<" ";
    // }


    //print size v1
     cout<<v1.size();

     cout<<endl;
   





    //one time move two steps at a time then check s[i]==s[i+1]  then increment i by 2 or count++ else i++ and count++
    // int count=0;
    // for(int i=0;i<n;i++){
    //     if(s[i]==s[i+1]){

    //         cout<<s[i]<<" "<<s[i+1];
    //         // count++;
    //         // i+=2;

    //         // cout<<count<<" ";
    //     }
    //     else{

    //        // cout<<s[i]<<" "<<s[i+1];
    //         // count++;
    //         // i++;

    //         // cout<<count<<" ";
    //     }
    // }

    // cout<<endl;


   // cout<<count<<endl;




    // int count=0;
    // for(int i=0;i<n;i++){
    //     if(s[i]==s[i+1]){
    //         count++;
    //         i+=2;
    //     }
    //     else {
    //         count+=2;
    //         i+=2;
    //     }
    // }

    // cout<<count<<endl;




}

    return 0;
}