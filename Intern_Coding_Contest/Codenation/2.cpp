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


int solve(int A,vector<vector<int>> B,string C,vector<vector<int>> D){

    //     You love strings a lot so you decided to play the following game.

// The have a tree T of Anodes. The tree is represented by a matrix B of dimensions (A - 1) * 2 such that there exist an edge between node B[i][1] and B[i][2] Each node is assigned a lowercase english character, which is represented by a string C of length A. Node i is assigned character at position i of string C.

// You are given Q queries in the form of a matrix D of dimensions Q * 2 For each you query you will perform the following steps:

// 2. You will move from node D[i][1] to node D[i][2] using the shortest possible path.

// 2. Let V[3], V[2] - V[k] be the nodes visited in the corresponding order. Create a string $ such that length of S is equal to K and S[i] = C[V[i]]. 3. Store string Sin your bag.

// Return the number of unique strings you would create.

// Diem Constraints

// A c 105

// a matrix of dimensions (A - 1) * 2

// -A

// contains towercase english alphabets 1K = 10 ^ 3

// matrix of dimensions 0 * 2 [1] DF][2] <= A



   
}



int main(){




int A=5;
vector<vector<int>> B={{1,4},{5,1},{2,4},{3,4}};
string C="baaba";
vector<vector<int>> D={{5,2},{3,5}};

int ans=solve(A,B,C,D);

cout<<ans;








    return 0;
}

