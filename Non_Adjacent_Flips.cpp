#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int m;
cin>>m;
int t=m;
// cout<<t<<endl;

while(t--){

    int n;
    cin>>n;

    //n length of binary number take input

    string s;
    cin>>s;

   // cout<<s<<endl;

int flag=0;

//store postion of 1 in vector 
    vector<int> v;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            flag=1;
            v.push_back(i);
        }
    }

    //print v

    // if(v.empty()){
    //     cout<<"0"<<endl;
    // }


    // else {
    //      for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // }
   

    // //go forward 1 step then check difference of position of 1 
    // //store difference in vector

  



 if(v.empty()){
        cout<<"0"<<endl;
    }


    else {

          vector<int> v1;
    for(int i=0;i<v.size()-1;i++){
        v1.push_back(v[i+1]-v[i]);
    }

    //if v1[i]==1 then print 2 else print 1

    for(int i=0;i<v1.size();i++){
        if(v1[i]==1){
            cout<<"2";
            break;
        }
        else{
            cout<<"1";
            break;
        }
    }
    cout<<endl;
    


    //      for(int i=0;i<v1.size();i++){
    //     cout<<v1[i]<<" ";
    // }
    // cout<<endl;

    }

//     // //print v1

// if(flag==1){
//     for(int i=0;i<v1.size();i++){
//         cout<<v1[i]<<" ";
//     }

//     cout<<endl;
// }




   


    

//check 1 is present in odd position or not in string
    
        // int flag=0;
        // for(int i=0;i<s.length();i++){
        //     if(s[i]=='1'){
        //         if(i%2==1){
        //             flag=1;
        //             break;
        //         }
        //     }
        // }

        
//check 1 is present in even position or not in string

// int flag1=0;

//         for(int i=0;i<s.length();i++){
//             if(s[i]=='1'){
//                 if(i%2==0){
//                     flag1=1;
//                     break;
//                 }
//             }
//         }




    //if 1 is not present in the binary number then output 0

    // if(s.find('1')==string::npos){
    //     cout<<0<<endl;
    //     continue;
    // }




    // else if(flag==1 && flag1==1){
    //     cout<<"2"<<endl;
    // }
    // else{
    //     cout<<"1"<<endl;

    // }

    

    

   
   

    






}

    return 0;
}