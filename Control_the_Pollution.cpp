#include<bits/stdc++.h>
using namespace std;
#define ll long long

//function
int minsmk(int n,int x, int y){
    if(n==0)
    return 0;
    if(n<=4){
        return x>y?y:x;
    }

    if(n<=100){
        
    }
}










int main(){

int t;
cin>>t;
while(t--){
    

    int n,x,y;
    cin>>n>>x>>y;
    int a[n];

    //take input
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int ans= minsmk(n,x,y);
    cout<<ans<<endl;

    // unordered_map<int, int> m;
    // int ans=0;
    // while(n!=0){
    //     int ans=0;



    // if(n<=100){
    //   //find  min((n/4+1)*y,(n/100+1)*x);
    //     int ans+=min((n/4+1)*y,(n/100+1)*x);
    //     //cout<<ans<<endl;
    //    //push ans into unordered_map
    //     if(m.find(ans)!=m.end()){
    //         m[ans]++;
    //     }
    //     else{
    //         m[ans]=1;
    //     }

       
       

    // }
    // else if(n>100 && n<=200){
    //     int n=n-100;
    //     int ans+=x+ min((n/4+1)*y,(n/100+1)*x);
    //    // cout<<ans<<endl;
    //     if(m.find(ans)!=m.end()){
    //         m[ans]++;
    //     }
    //     else{
    //         m[ans]=1;
    //     }
        

        
    // }

    // else if(n>200 && n<=300){
    //     int n=n-200;
    //     int ans+=x+x+ min((n/4+1)*y,(n/100+1)*x);
    //     //cout<<ans<<endl;
    //     if(m.find(ans)!=m.end()){
    //         m[ans]++;
    //     }
    //     else{
    //         m[ans]=1;
    //     }
        

        
    // }

    // else if(n>300 && n<=400){
    //     int n=n-300;
    //     int ans+=x+x+x+ min((n/4+1)*y,(n/100+1)*x);
    //     //cout<<ans<<endl;
    //     if(m.find(ans)!=m.end()){
    //         m[ans]++;
    //     }
    //     else{
    //         m[ans]=1;
    //     }
        

        
    // }

    // else if(n>400 && n<=500){
    //     int n=n-400;
    //     int ans+=x+x+x+x+ min((n/4+1)*y,(n/100+1)*x);
    //     //cout<<ans<<endl;
    //     if(m.find(ans)!=m.end()){
    //         m[ans]++;
    //     }
    //     else{
    //         m[ans]=1;
    //     }
        

        
    // }

    // else if(n>500 && n<=600){
    //     int n=n-500;
    //     int ans+=x+x+x+x+x+ min((n/4+1)*y,(n/100+1)*x);
    //     //cout<<ans<<endl;
    //     if(m.find(ans)!=m.end()){
    //         m[ans]++;
    //     }
    //     else{
    //         m[ans]=1;
    //     }
        

        
    // }





  //  }


}

    return 0;
}