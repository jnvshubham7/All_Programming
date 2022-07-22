#include<bits/stdc++.h>
using namespace std;
#define ll long long














int maxEnvelopes(vector<vector<int> >& envelopes)
{
    // Number of envelopes
    int N = envelopes.size();
 
    if (N == 0)
        return N;
 
    // Sort the envelopes in increasing
    // order of width and decreasing order
    // of height is width is same
    sort(envelopes.begin(), envelopes.end(),
        [](vector<int>& a, vector<int>& b) {
            return a[0] < b[0]
                    or (a[0] == b[0] and a[1] > b[1]);
        });
 
    // To store the longest increasing
    // sequence of height
    vector<int> dp;
 
    // Finding LIS of the heights
    // of the envelopes
    for (int i = 0; i < N; ++i) {
        auto iter = lower_bound(dp.begin(),
                                dp.end(),
                                envelopes[i][1]);
 
        if (iter == dp.end())
            dp.push_back(envelopes[i][1]);
        else if (envelopes[i][1] < *iter)
            *iter = envelopes[i][1];
    }
 
    // Return the result
    return dp.size();

 // cout<<dp.size()+1<<endl;
 // }
}
















int main(){

int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
    int a[n];
    int b[n];

    //take input a[n]
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //take input b[n]
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    vector<vector<int>> envelopes;
    for(int i=0;i<n;i++){
        vector<int> temp;
        temp.push_back(a[i]);
        temp.push_back(b[i]);
        envelopes.push_back(temp);
    }



  



cout<<maxEnvelopes(envelopes)<<endl;











  //print all elements of vector
    // for(int i=0;i<envelopes.size();i++){
    //     for(int j=0;j<envelopes[i].size();j++){
    //         cout<<envelopes[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    
    //create two unordered_map to store input with index
    // unordered_map<int,int> m1;
    // unordered_map<int,int> m2;

    // //insert elements in unordered_map with index
    // for(int i=0;i<n;i++){
    //     m1[a[i]]=i;
    //     m2[b[i]]=i;
    // }







    // //print all elements of unordered_map
    // for(auto it=m1.begin();it!=m1.end();it++){
    //     cout<<it->first<<" "<<it->second<<" ";
    // }

    // for(auto it=m2.begin();it!=m2.end();it++){
    //     cout<<it->first<<" "<<it->second<<" ";
    // }




















    //find max element in unordered_map
    // int max1=0;
    // for(auto it=m1.begin();it!=m1.end();it++){
    //     if(it->second>max1){
    //         max1=it->second;
    //     }
    // }
    // int max2=0;
    // for(auto it=m2.begin();it!=m2.end();it++){
    //     if(it->second>max2){
    //         max2=it->second;
    //     }
    // }
    // //comapre max element of two unordered_map
    // if(max1>max2){



        //at same index of check insrt all elements compare with index of max element in unordered_map
        // for(int i=0;i<n;i++){
        //     if(i==max1){
        //         for(int j=0;j<n;j++){
        //             if(j==max2){
        //                 continue;
        //             }
        //             else{
        //                 cout<<b[j]<<" ";
        //             }
        //         }
        //     }
        //     else{
        //         cout<<a[i]<<" ";
        //     }
        // }


    //     cout<<max1<<endl;
    // }
    // else{
    //     cout<<max2<<endl;
    // }


  




    // vector<int> a;
    // vector<int> b;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     a.push_back(x);
    // }

    // for(int i=0;i<n;i++){
    //     int y;
    //     cin>>y;
    //     b.push_back(y);
    // }


    //find max element in vector a and b
    // int max_a=*max_element(a.begin(),a.end());
    // int max_b=*max_element(b.begin(),b.end());

    // //compare max element of vector a and b

    // int max_a_b=0;
    // if(max_a>max_b){
    //   max_a_b=max_a;
    // }
    // else{
    //     max_a_b=max_b;
    // }

    // //find index of max_a_b in vector a and b
    // int index_a=distance(a.begin(),find(a.begin(),a.end(),max_a_b));
    // int index_b=distance(b.begin(),find(b.begin(),b.end(),max_a_b));



    //compare index_a and index_b 
//     int final_index=0;
//    final_index=max(index_a,index_b);

    //print final index
  //  cout<<final_index<<endl;


    //max index of vector a and b
    // int max_index_a=index_a+1;
    // int max_index_b=index_b+1;



    //print index
  //  cout<<index_a<<" "<<index_b<<endl;


    // if(max_a>max_b){
    //     cout<<max_a<<endl;
    // }
    // else{
    //     cout<<max_b<<endl;
    // }

    //find index of max element in vector a
//     int max_a=0;
//     for(int i=0;i<n;i++){
//         if(a[i]>a[max_a]){
//             max_a=i;
//         }
//     }

//     //print max element of vector a
//     cout<<a[max_a]<<endl;

//     //find element in vector b which inex is equal to max_a
//     int max_b=0;
//     for(int i=0;i<n;i++){
//         if(b[i]==a[max_a]){
//             max_b=i;
//         }
//     }

// cout<<b[max_b]<<endl;



    //print both vector
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" "<<b[i]<<" ";
//     }
// cout<<endl;




}

    return 0;
}