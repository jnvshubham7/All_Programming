
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){

     ll n;
    cin>>n;
    ll a[n];

    //take in input
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    vector<ll> v(a,a+n);

   //check if the vector is sorted or not

int flag1=0;

    for(ll i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            flag1=1;
            break;
        }
    }









   







    

    //spilit the array into two parts n times and store in two vector

vector<ll> v1;
vector<ll> v2;

int flag=0;

while(n--){

for(int i=0;i<n;i++){
    v1.push_back(a[i]);
    for(int j=i+1;j<n;j++){
        v2.push_back(a[j]);
    }

}

//sort the vector
sort(v1.begin(),v1.end());
sort(v2.begin(),v2.end());

//add the two vector
vector<ll> v3;

//add both vector
for(int i=0;i<v1.size();i++){
    v3.push_back(v1[i]);
    v3.push_back(v2[i]);
}

//check if the vector is sorted or not

for(int i=0;i<v3.size()-1;i++){
    if(v3[i]>v3[i+1]){
        flag=1;
        break;
    }
}




}

//check 

if(flag1==0){
    cout<<"NO"<<endl;
}
else{

    
if(flag){
    cout<<"yes"<<endl;
}
else{
    cout<<"no"<<endl;
}


   
}

























//     ll mid=n/2;
//     vector<ll> v1(mid);
//     vector<ll> v2(n-mid);

//     for(ll i=0;i<mid;i++){
//         v1[i]=a[i];
//     }

//     for(ll i=mid;i<n;i++){
//         v2[i-mid]=a[i];
//     }

//     //sort the vector
//     sort(v1.begin(),v1.end());
//     sort(v2.begin(),v2.end());

//     //add both the vector into a new vector
//     vector<ll> v3;
//     v3.reserve(n);
//     v3.insert(v3.end(),v1.begin(),v1.end());
//     v3.insert(v3.end(),v2.begin(),v2.end());
// int flag=0;
//     //check if the vector is sorted or not
//     for(ll i=0;i<n;i++){
//         if(v3[i]!=a[i]){
//            // cout<<"Not Sorted"<<endl;
//             flag=1;

//             break;
//         }
//     }

//     if(flag==0){
//         cout<<"No"<<endl;
//     }
//     else{
//         cout<<"Yes"<<endl;
//     }


   

    

}

    return 0;
}





























// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main(){

// int t;
// cin>>t;
// while(t--){

//     ll n;
//     cin>>n;
//     ll a[n];

//     //take in input
//     for(ll i=0;i<n;i++){
//         cin>>a[i];
//     }
//     //store the input in a vector
//     vector<ll> v(a,a+n);
//     //print the vector
//     // for(ll i=0;i<v.size();i++){
//     //     cout<<v[i]<<" ";
//     // }
    


//     //if the input is sorted then print NO
//     // for(ll i=0;i<n-1;i++){
//     //     if(a[i]>a[i+1]){
//     //         cout<<"NO"<<endl;
//     //         break;
//     //     }
//     // }

// int flag=0;
//     //check if the array is sorted or not
//     for(ll i=0;i<n-1;i++){
//         if(a[i]>a[i+1]){
//             flag=1;
           
//            // cout<<"Not Sorted"<<endl;
//             break;
//         }
//     }
//     if(flag==0){
//        // cout<<"No"<<endl;
//     }

//      //store elements in vector v1 simulatnoushly pop up that element if any element is repeated then break
//     vector<ll> v1;
//     vector<ll> v2;
//     for(ll i=0;i<n;i++){
//         if(find(v1.begin(),v1.end(),a[i])==v1.end()){
//             v1.push_back(v[i]);
//             //delete(v[i]); from vector v'
//             //
//             v2.push_back(v[i]);

            


      
//             //popout that element
//             //v.pop_back(); from front
//             // reverse(v.begin(),v.end());
//             // v.pop_back();
//             // reverse(v.begin(),v.end());

// //ERASE FROM VECTOR
//            //  v.erase(v.begin());
//            // v.erase(begin(v));


//             //v.pop_back();


//         }
//         else{
//             break;
//         }
//     }

//     //from starting to end all elements are same from v2 and v are same delete the element from v
//     //compare all elements from v2 and v and if they are same then delete that element from v
//     //if the elements are not same then break

//     for(ll i=0;i<v2.size();i++){
//         if(find(v.begin(),v.end(),v2[i])!=v.end()){
//             v.erase(find(v.begin(),v.end(),v2[i]));
//         }
//         else{
//             break;
//         }
//     }




//     //sort the vector v and v1
//     sort(v.begin(),v.end());
//     sort(v1.begin(),v1.end());

//     //add the elements of v1 to v
//     // for(ll i=0;i<v1.size();i++){
//     //     v.push_back(v1[i]);
//     // }

//     //add the elements of v to v1
//     for(ll i=0;i<v.size();i++){
//         v1.push_back(v[i]);
//     }

//     //check if the vector v is sorted or not
//     // for(ll i=0;i<n-1;i++){
//     //     if(v[i]>v[i+1]){
//     //         cout<<"NO"<<endl;
//     //         break;
//     //     }
//     // }





// int flag1=0;
//     //check if the vector v1 is sorted or not
//     for(ll i=0;i<n-1;i++){
//         if(v1[i]>v1[i+1]){
//             cout<<"Yes"<<endl;
//             flag1=1;
            
//             break;
//         }
        
//     }
   


// if(flag1==0){
//     cout<<"No"<<endl;
// }

   
   
//     //print the vector v1
//     // for(ll i=0;i<v1.size();i++){
//     //     cout<<v1[i]<<" ";
//     // }
//     // cout<<endl;

//     //print the vector v
//     // for(ll i=0;i<v.size();i++){
//     //     cout<<v[i]<<" ";
//     // }
//     // cout<<endl;

//     //store all the elements in a vector if any element is repeated then afterthat all elemnents store in different vector
   

//     //store elements in vector v if any element is repeated then break   afterthat all rest element store in vector v1
//     // for(ll i=0;i<n;i++){
//     //     if(find(v.begin(),v.end(),a[i])==v.end()){
//     //         v.push_back(a[i]);
//     //     }
//     //     else{
//     //         break;
//     //     }
//     // }

//     // for(ll i=0;i<n;i++){
//     //     if(find(v.begin(),v.end(),a[i])==v.end()){
//     //         v.push_back(a[i]);
//     //     }
//     //     else{
//     //         v1.push_back(a[i]);
//     //     }
//     // }

//     //store all the elements in a vector where the element is not repeated if any element is repeated then after that all elements store in different vector
//     // for(ll i=0;i<n;i++){
//     //     if(find(v.begin(),v.end(),a[i])==v.end()){
//     //         v.push_back(a[i]);
//     //     }
//     //     else{
//     //         v1.push_back(a[i]);
//     //     }
//     // }


//     // for(ll i=0;i<n;i++){

//     //     //check if the element is repeated or not
//     //     if(find(v.begin(),v.end(),a[i])==v.end()){
//     //         v.push_back(a[i]);
//     //     }
//     //     else{
//     //         v1.push_back(a[i]);
//     //     }
//     //   //  v.push_back(a[i]);
//     // }

//     // //print both vector
//     // for(ll i=0;i<v.size();i++){
//     //     cout<<v[i]<<" ";
//     // }
//     // cout<<endl;
//     // for(ll i=0;i<v1.size();i++){
//     //     cout<<v1[i]<<" ";
//     // }

   


// }

//     return 0;
// }