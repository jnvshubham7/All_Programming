#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>>t;
while(t--){
ll n;
cin>>n;

ll arr[n];
for(ll i=0;i<n;i++){
cin>>arr[i];
}
           
           //every place in array replace with abs(arr[i])
              for(ll i=0;i<n;i++){
                arr[i]=abs(arr[i]);
              }
              //print array
                // for(ll i=0;i<n;i++){
                //     cout<<arr[i]<<" ";
                // }

                // cout<<endl;


                //find max element in odd place

                 vector<ll> v;
                 vector<ll> v1;


                ll maxi=0;

                for(ll i=0;i<n;i++){
                    if(i%2!=0){
                        if(arr[i]>maxi){
                            maxi=arr[i];
                            v.push_back(i);
                        }
                    }
                }

               // cout<<maxi<<" ";

                //find min element in even place
                ll mini=INT_MAX;

                for(ll i=0;i<n;i++){
                    if(i%2==0){
                        if(arr[i]<mini){
                            mini=arr[i];
                            v1.push_back(i);

                        }
                    }
                }

                //print vector
                // for(ll i=0;i<v.size();i++){
                //     cout<<v[i]<<" ";
                // }

                //  cout<<endl;

                // for(ll i=0;i<v1.size();i++){
                //     cout<<v1[i]<<" ";
                // }   

                // cout<<endl;


//last element of vector v is intialized with maxindex
//last element of vector v1 is intialized with minindex

ll maxindex=v[v.size()-1];
ll minindex=v1[v1.size()-1];

 //cout<<maxindex<<" "<<minindex<<endl;


              //  cout<<mini<<endl;

                //swap max and min element in array in even place and odd place
                // for(ll i=0;i<v.size();i++){
                //     if(v[i]%2==0){
                //         swap(arr[v[i]],arr[v[i]+1]);
                //     }
                // }

                //in array at maxindex and minindex swap
                swap(arr[minindex],arr[maxindex]);


                // for(ll i=0;i<n;i++){


                //     if(arr[i]==maxi && i%2!=0){
                //         arr[i]=mini;

                //        // break;
                //     }
                //     else if(arr[i]==mini && i%2==0){
                //         arr[i]=maxi;
                //        // break;
                //     }
                // }
                // //print array
                

                //in odd place multiply by -1
                for(ll i=0;i<n;i++){
                    if(i%2!=0){
                        arr[i]=-1*arr[i];
                    }
                }

                // for(ll i=0;i<n;i++){
                //     cout<<arr[i]<<" ";
                // }
                // cout<<endl;


                //sum of array
                ll sum=0;
                for(ll i=0;i<n;i++){
                    sum+=arr[i];
                }

                cout<<sum<<endl;


              


}

    return 0;
}