#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
   // fileio;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
      int c=INT_MAX,k=INT_MIN;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        c=min(c,arr[i]);
        k=max(k,arr[i]);
    }
    cout<<abs(k-c)<<endl;



     

    }

    return 0;
}