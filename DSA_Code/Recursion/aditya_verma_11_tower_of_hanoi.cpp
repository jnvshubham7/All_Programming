//https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1/
    
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define vi vector<int>
    #define pii pair<int,int>
    #define fr(i,n) for(int i=0;i<n;i++)
    #define all(v) v.begin(),v.end()
    #define mem(a,b) memset(a,b,sizeof(a))
    #define MOD 1000000007
    #define pb push_back
    #define mp make_pair
    #define pii pair<int,int>
    #define vll vector<ll>
    #define vc vector<char>
    #define vs vector<string>
        
    
    
    
    
   class Solution{
    public:
    long long cnt=0;
   
    long long toh(int N, int source, int destination, int helper) {
     
        solve(source,destination,helper,N);
        return cnt;
        
    }

     void solve(int source,int destination,int helper,int N){
       
        
        if(N==1){
            //move disk 1 from rod 1 to rod 2

            cout<<"move disk "<<N<<" from rod "<<source<<" to rod "<<destination<<endl;
            
            cnt++;
            return;
        }
         cnt++;
        
        solve(source,helper,destination,N-1);
        cout<<"move disk "<<N<<" from rod "<<source<<" to rod "<<destination<<endl;
        
       
        solve(helper,destination,source,N-1);
       


     }
   };





     int main(){
     Solution s;
     
      int source=1,helper=2,destination=3,num_disc;
    cin>>num_disc;
    cout<<s.toh(num_disc,source,destination,helper)<<endl;
   

        return 0;
     }