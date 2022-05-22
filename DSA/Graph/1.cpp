#include<bits/stdc++.h>
using namespace std;

const int N=1e3+10;
int graph1[N][N];


vector<pair<int,int> > graph2[N];





int main(){
 
    int n,m;

    cin>>n>>m;
   

    for(int i=0;i<m;++i)
    {
        int v1,v2,wt;
        cin>>v1>>v2;
        graph1[v1][v2]=wt;
        graph1[v2][v1]=wt;

        graph2[v1].push_back({v2,wt});
         graph2[v2].push_back({v1,wt});


         if(graph1[i][j]==1)
         {
//connected
         }

         graph1[i][j]

         for(pair<int,int> child: graph2[i])
         {
             if(child==j)
             {
                 //connected
                 child.second;
             }
         }




    }





    return 0;
}