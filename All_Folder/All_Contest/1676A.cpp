#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

   string s;
    cin>>s;
    int n=s.size();

    int sum1=0;
    int sum2=0;

    for(int i=0;i<3;i++){

        sum1+=s[i];
    }

    for(int i=3;i<6;i++){

        sum2+=s[i];
    }

    if(sum1==sum2){

        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    







    //size of n
   



    //convert number to digits
    //in number have  leading zeros  so do accordingly    
    // vector<int> digits;
    // int temp=n;
    // // if(temp==0){
    // //     digits.push_back(0);
    // // }

    // // if(temp!=0){
    //      while(temp){
    //         digits.push_back(temp%10);
    //         temp/=10;
    //     }
      
    // }
    // else {
    //      cout<<"YES"<<endl;
       
    // }
    // while(temp!=0){
    //     //check if any place have zero then push 0

    //     //if leading zeros then push 0
    //     if(temp%10==0){
    //         digits.push_back(0);
    //     }
    //     else{
    //         digits.push_back(temp%10);
    //     }
        
    //     temp/=10;
    // }



  // print digits
    // for(int i=0;i<digits.size();i++){
    //     cout<<digits[i]<<" ";
    // }
    // cout<<endl;

    // //sum of elements in digits from 0 to 2 place 
    // int sum=0;
    // for(int i=0;i<3;i++){
       
    //         sum+=digits[i];
        
    // }

//   int sum2=0;
//     for(int i=3;i<6;i++){
//              sum2+=digits[i];
        
//     }

    // cout<<sum<<" "<<sum2<<endl;

   // cout<<sum<<endl;

  //  sum of the first three digits is equal to the sum of the last three digits
  // it can have leading zeroes
    // so we can use the same logic as the previous problem

    // int a[n];
    // int b[n];

    // for(int i=0;i<n/2;i++){
    //     cin>>a[i];
    // }

    // for(int i=0;i<n;i++){
    //     cin>>b[i];
    // }

    // int sum1=0;
    // int sum2=0;

    // for(int i=0;i<3;i++){
    //     sum1+=a[i];
    //     sum2+=b[i];
    // }

    //print sum1
   // cout<<sum1<<" ";

//    if(sum1==sum2){
//          cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }


    //first three digits of n store in vector 1
    //it can have leading zeroes so do accordingly

    // vector<int> v1;
    // vector<int> v2;

    // int temp=n;

    // while(temp>0){
    //     v1.push_back(temp%10);
    //     temp/=10;
    // }


    // //last three digits of n store in vector 2
    // //it can have leading zeroes so do accordingly

    // temp=n;

    // while(temp>0){
    //     v2.push_back(temp%10);
    //     temp/=10;
    // }

    // int sum1=0;
    // int sum2=0;

    // for(int i=0;i<3;i++){
    //     sum1+=v1[i];
    //     sum2+=v2[i];
    // }

    // if(sum1==sum2){
    //     cout<<"YES"<<endl;
    // }
    // else{
    //     cout<<"NO"<<endl;
    // }

// int flag=0;
//     vector<int> v1; 
//     int temp = n;
//     if(temp==0){
//       flag=1;
//     }
//     else {
//           while(temp){
//         v1.push_back(temp%10);
//         temp/=10;
//     }

//     }
  

 

//     //print v1
//     // for(int i=0;i<v1.size();i++){
//     //     cout<<v1[i]<<" ";
//     // }
//     // cout<<endl;

//     int sum1=0;
//     int sum2=0;

//     for(int i=0;i<3;i++){
//         sum1+=v1[i];
//     }

//     for(int i=3;i<6;i++){
//         sum2+=v1[i];
//     }

//     // //print 
//     //  cout<<sum1<<" "<<sum2<<endl;

    
//     if((sum1==sum2) || (flag==1)){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }




// //in vector sum of 3 number is equal to last three number 
// int sum1=0;
// int sum2=0;

// for(int i=0;i<v1.size()/2;i++){
//     sum1+=v1[i];
// }

// for(int i=v1.size()/2;i<v1.size();i++){
//     sum2+=v1[i];
// }

// //print sum1 and sum2
//  cout<<sum1<<" "<<sum2<<endl;

//sum1 and sum2  equal print yes else no
// if(sum1==sum2){
//     cout<<"Yes"<<endl;

// }
// else{
//     cout<<"No"<<endl;
// }












    

    

}

    return 0;
}