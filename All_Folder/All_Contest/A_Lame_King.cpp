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
#define ppi pair<int,pair<int,int>>
#define ppd pair<double,pair<int,int>>

int main(){
ll t;
cin>>t;
while(t--){

//     You are given a checkerboard of size 201×201, i. e. 
//     it has 201 rows and 201 columns. The rows of this checkerboard 
//     are numbered from −100 to 100 from bottom to top. 
//     The columns of this checkerboard are numbered from −100 to 100 
//     from left to right. The notation (r,c) denotes the cell located 
//     in the r-th row and the c

// -th column.

// There is a king piece at position (0,0)
// and it wants to get to position (a,b)

// as soon as possible. In this problem our king is lame. Each second, the king makes exactly one of the following five moves.

//     Skip move. King's position remains unchanged.
//     Go up. If the current position of the king is (r,c)

// he goes to position (r+1,c)
// .
// Go down. Position changes from (r,c)
// to (r−1,c)
// .
// Go right. Position changes from (r,c)
// to (r,c+1)
// .
// Go left. Position changes from (r,c)
// to (r,c−1)

//     . 

// King is not allowed to make moves that put him outside of the board. 
// The important consequence of the king being lame is that he is not 
// allowed to make the same move during two consecutive seconds. 
// For example, if the king goes right, the next second he can only 
// skip, go up, down, or left.


   int a,b;
    cin>>a>>b;

    int ans=0;
    if(a==0 && b==0)
    {
        cout<<0<<endl;
        continue;
    }

    if(a==0 || b==0)
    {
        cout<<1<<endl;
        continue;
    }

    


    

}

    return 0;
}