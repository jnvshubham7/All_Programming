#include<bits/stdc++.h>
using namespace std;
#define ll long long

// int getMinOperations(ll *arr, int n) {
//    unordered_map<ll, ll> hash;
//    for (int i = 0;i < n; ++i) {
//       hash[arr[i]]++;
//    }
// int maxFrequency = 0;
//    for (auto elem : hash) {
//       if (elem.second > maxFrequency) {
//          maxFrequency = elem.second;
//       }
//    }
//    return (n - maxFrequency);
// }


// int minMoves(vector<ll> nums) {
//        int total=0, least=nums[0];
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] < least) {
//                 least = nums[i];
//             }
//             total = total + nums[i];
//         }
//         return total - least * nums.size(); 
//     }

int main(){

int t;
cin>>t;
while(t--){

    ll n;
    cin>>n;
    ll a[n];

    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }

    //take OR of all elements
    ll ans=a[0];
    for(ll i=1;i<n;i++)
    {
        ans=ans|a[i];
    }

    //count the number of set bits
    ll count=0;
    while(ans)
    {
        ans=ans&(ans-1);
        count++;
    }

    cout<<count<<endl;

    
    // vector<ll> v;


    // for(int i=0;i<n;i++)
    // {
    //   for(int j=i+1;j<=n;j++)
    //   {

    //     if(a[i]!=a[j])
    //     {
    //       v.push_back(a[i]);
    //       break;
    //      // cn++;
    //     }

    //     break;



    //   }
    // }

    //cout<<v.size()<<endl;

    //if all elements are equal to zero then cout 0



    


    //if a[0]==0 and all other elements are equal to zero then cout 0






  // ll ans= getMinOperations(a, n);

  //  if(find(v.begin(),v.end(),0) == v.end())
  //  {
  //    cout<<0<<endl;
  //  }
  //  else
  //  {
  //    cout<<ans<<endl;
  //  }

  //  if(v.size()==0)
  //  {
  //    cout<<"0"<<endl;
  //  }

  //     if(a[0]==0 )

  //   {
  //     int flag=0;

  //     for(int i=1;i<n;i++)

  //     {

  //       if(a[i]!=0)

  //       {

          
  //         break;

  //       }
  //       else {
  //         flag=1;

  //        // cout<<0<<endl;
  //       }
       
  //       // else
  //       // {
  //       //   cout<<ans<<endl;
  //       // }

  //     }
  //      if(flag==1)
  //       {
  //         cout<<0<<endl;
  //       }

  //   }

  // else  if(v.size()==n)
  //  {
  //    cout<<ans<<endl;
  //  }

  //  else {

  //    cout<<ans+1<<endl;

  //  }


  // cout<<ans<<endl;

















//     #include <bits/stdc++.h>
// using namespace std;

// int main() {
//    int arr[] = {1, 2, 3, 4};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    cout << "Minimum required operations = " <<
//    getMinOperations(arr, n) << endl;
//    return 0;
// }


//     You are given an array A of length N

// .

// You can perform the following operation on the array any number of times:

//     Choose any subsequence S

// of the array A and a positive integer X such that X is a power of 2 and subtract X from all the elements of the subsequence S

//     .

// Find the minimum number of operations required to make all the elements of the array equal to 0


//make all the elements of the array equal to 0

    // ll cn=0;

    // vector<ll> v;


    // for(int i=0;i<n;i++)
    // {
    //   for(int j=i+1;j<=n;j++)
    //   {

    //     if(a[i]!=a[j])
    //     {
    //       v.push_back(a[i]);
    //      // break;
    //      // cn++;
    //     }

    //   //  break;



    //   }
    // }

    //print v

    // for(int i=0;i<v.size();i++)
    // {
    //   cout<<v[i]<<" ";
    // }

    // cout<<endl;



    // int ans=minMoves(v);

    // cout<<ans<<endl;

















    // ll max=INT_MIN;

    // //find max of a,b,c,d
    // for(ll i=0;i<n;i++)
    // {
    //     if(a[i]>max)
    //     {
    //         max=a[i];
    //     }
    // }

    // if(max%2==0)
    // {
    //    cout<<max/2<<endl;
    // }
    // else
    // {
    //     cout<<max/2+1<<endl;
    // }

    // vector<ll> v;

    // //all the elements in v
    // for(ll i=0;i<n;i++)
    // {
    //     v.push_back(a[i]);
    // }

    // reverse(v.begin(),v.end());

    // ll cn=0;

    // int m=v.size();


    // vector<ll> v1;

    // //all unique elements push into vector v1

    // for(ll i=0;i<m;i++)
    // {
    //     if(find(v1.begin(),v1.end(),v[i])==v1.end())
    //     {
    //         v1.push_back(v[i]);
    //     }
    // }

    // //print v1

    // for(ll i=0;i<v1.size();i++)
    // {
    //     cout<<v1[i]<<" ";
    // }

    // cout<<endl;


   // cout<<v1.size()<<endl;






    //if unique elements in v then cn++ or delete the element from v
    //if dubplicate elements in v then cn++ or delete all duplicate elements from v
    
    // for(ll i=0;i<m;i++)
    // {

    //      if(find(v.begin(),v.end(),v[i])==v.end())
    //     {
    //         cn++;

    //         remove(v.begin(),v.end(),v[i]);
    //     }

    //     else {
    //         cn++;
    //         v.erase(remove(v.begin(),v.end(),v[i]),v.end());
    //     }

       
    // }

    // cout<<cn<<endl;

    //print v
    // for(ll i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    // cout<<endl;

    //all unique elements push into vector

    //if aLL element are zero cout 0

    //if()



    // for(ll i=0;i<n;i++)
    // {
    //     if(find(v.begin(),v.end(),a[i])==v.end())
    //     {
    //         v.push_back(a[i]);
    //     }
    // }

    // //all duplicate elements push into vector

    // for(ll i=0;i<n;i++)
    // {
    //     if(find(v.begin(),v.end(),a[i])!=v.end())
    //     {
    //         v.push_back(a[i]);
    //     }
    // }

    // for(ll i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    // cout<<endl;

  //  cout<<v.size()-1<<endl;



}

    return 0;
}