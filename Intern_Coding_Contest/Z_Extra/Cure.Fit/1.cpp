
//https://leetcode.com/discuss/interview-question/1530730/cure.fit-OA-SDE0-19th-October-2021

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



void dfs(vector<vector<int>>& graph,vector<vector<int>>& vis,int i){
    int n = graph.size();
    int m=graph[0].size();

    vis[i][0]=1;
    for(int j=0;j<n;j++){
        if(graph[i][j]==1 && vis[j][0]==0){
            dfs(graph,vis,j);
        }
    }
}



int min_camera_cover(vector<vector<int>>& graph){
    int n = graph.size();
    int m=graph[0].size();

    vector<vector<int>> vis(n,vector<int>(m,0));

    int ans = 0;

    for(int i=0;i<n;i++){
        if(vis[i][0]==0){
            dfs(graph,vis,i);
            ans++;
        }
    }

    return ans;

}

  



int main(){

    vector<vector<int>> graph = {{1,2} , {2,3} , {3,4} , {4,1} };

    cout<<min_camera_cover(graph)<<endl;



    return 0;
}


