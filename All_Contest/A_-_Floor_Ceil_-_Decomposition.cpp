#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   ll x;
    cin>>x;
    ll max=0;

    vector<ll> v;
    vector<ll> v1;
    //Erase one x from the blackboard and write two new integers ⌊x/2​⌋ and ⌈x/2​⌉.
  //divide x in two parts and store them in v

    for(ll i=0;i<x;i++){
        v.push_back(i);
    }

    //vector in two parts
    ll n=v.size();
    ll sum=0;
    for(ll i=0;i<n;i++){

       //if element is even then divide it by 2
         if(v[i]%2==0){
            //  v[i]=v[i]/2;

            v1.push_back(v[i]);

              v.push_back(v[i]/2);
                v.push_back(v[i]/2);

              //erase the element from the vector
              //and add the new element to the vector
               // v.erase(v.begin()+i);
               // v.push_back(v[i]);
              //  v.push_back(v[i]);
         }
            //if element is odd then add 1 to it
            else{
                v1.push_back(v[i]);
                
               //divide and add 1
            v.push_back(v[i]/2);
            v.push_back(v[i]/2+1);
            //show front and pop




                // v.erase(v.begin()+i);
                // v.push_back(v[i]);
                // v.push_back(v[i]);
            }

            //erase all element from v which match to v1 element

           


//  for(ll j=0;j<v1.size();j++){
//                 if(v[i]==v1[j]){
//                     v.erase(v.begin()+i);
//                 }
//             }

        


        //sum of every square of every element in v
        sum+=v[i]*v[i];
        max=max>sum?max:sum;
        sum=0;

        
    
        
    }

    



    //print vector
    for(ll i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

   // cout<<max<<endl;
   

   


    return 0;
}