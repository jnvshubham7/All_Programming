#include<bits/stdc++.h>
using namespace std;

class Graph {
    public:

    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v, bool direction) {

        //direction =0 means undirected graph
        //direction =1 means directed graph


        //create an edge from u to v
        adjList[u].push_back(v);

        if(direction == 0) {
            //create an edge from v to u
            adjList[v].push_back(u);
        }



      
        }

        void printAdjList() {
            for(auto i: adjList) {
                cout<<i.first<<"->";
                for(auto entry: i.second) {
                    cout<<entry<<",";
                }
                cout<<endl;
            }
        }
    };

    int main () {
        Graph g;
        g.addEdge(1,2,0);
        g.addEdge(1,3,0);
        g.addEdge(2,3,0);
        g.addEdge(3,4,0);
        g.addEdge(4,5,0);
        g.printAdjList();
    }

    //Output:
    // 1->2,3,
    // 2->1,3,
    // 3->1,2,4,
    // 4->3,5,
    // 5->4,
    
