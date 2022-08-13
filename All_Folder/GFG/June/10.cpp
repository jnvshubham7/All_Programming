#include<bits/stdc++.h>
using namespace std;
#define ll long long










// class Solution {
//   public:
  
//     void maxCoins(int A[], int B[], int T, int N) {
        
    
        
        // int n=a.size();
        // int m=b.size();
        // int sum=0;
        // int i=0;
        // vector<int> v;
        
        // unordered_map<int,int> mp;
        
        // for(int i=0;i<n;i++)
        // {
        //     mp[a[i]]=b[i];
            
        // }
        
        
        
        
        // while(i<T)
        // {
        //     v.push_back(a[i]*b[i]);
        //     i+=a[i];
        // }
        
        
        
        // for(int i=0;i<n;i++)
        // {
        //     v.push_back(a[i]*b[i]);
            
        // }
        
        // sort(v.begin(),v.end());
        // reverse(v.begin(),v.end());
        
        // for(int i=0;i<v.size();i++)
        // {
        //     sum+=v[i];
        // }
        
       // return sum;
        
//         // code here
//     }
// };







int main(){

int ts;
cin>>ts;
while(ts--){

    int T,N;
    cin>>T>>N;

    int A[N],B[N];

    for(int i=0;i<N;i++)
    {
        cin>>A[i];

    }

    for(int i=0;i<N;i++)
    {
        cin>>B[i];

    }

         int ans=0;
         
        vector<pair<int,int>> vp;
        
        for(int i=0; i<N; i++){
            vp.push_back({B[i] , A[i]});
        }
        
        sort(vp.begin(), vp.end());
        
        for(int i=vp.size()-1; i>=0; i--){
            
            if(T<=0)
             break;
             
            int ct=vp[i].second;
            int gold=vp[i].first;
            
            while(T>0 && ct){
                ans += gold;
                T--;
                ct--;
            }
        }
       // return ans;
      // return vp;

    // Solution s;
    //  s.maxCoins(a, b, t, n);

    // cout<< vp.size();

    for(int i=0;i<vp.size();i++)
    {
        cout<<vp[i].first<<" "<<vp[i].second<<endl;
    }

   // cout<<s.maxCoins(a, b, t, n)<<endl;

    

}

    return 0;
}

