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


    //string is given in binary format. Find the lexicographically smallest string
    //we can choose substring of it. We can choose any substring of it. then reverse it.


    //change string all 0 to left and all 1 to right.

    //find the lexicographically smallest string.
    
//where we find 1 in the string. 

vector<int> v;
//first push all 0's. then push all 1's.
for(int i = 0; i<n; i++){
    if(s[i]=='0'){
        v.push_back(0);
    }
    else{
        v.push_back(1);
    }
}
//sort the vector.
sort(v.begin(), v.end());

//print the vector.
for(int i = 0; i<v.size(); i++){
    cout<<v[i];
}
cout<<endl;


    // int left = 0;
    // int right = 0;
    // int ans = 0;
    // while(right < n){
    //     if(s[right] == '1'){
    //         ans = max(ans, right - left + 1);
    //     }
    //     else{
    //         left = right + 1;
    //     }
    //     right++;
    // }
    // cout<<ans<<endl;




}

    return 0;
}