#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){


    // Given an undirected tree, consisting of N nodes. Find the pth ancestor of a given node. There will be Q queries in case No ancestor exists, output root node le, 1.

// First line contains N. the number of nodes in the tree. Next N - 1 lines contains two integers u and v, there is an edge between u and v. Next line contains Q. the number of queries. Each of the next Q lines contains a node p.

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int q;
    cin>>q;
    while(q--){
        int p;
        cin>>p;
        int ans=0;
        for(int i=0;i<n;i++){
            if(v[i]==p){
                ans=1;
                break;
            }
        }

    }

    



    return 0;
}