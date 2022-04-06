// we are going to write a code for primes algo.
// it is used to form a minimum spannig  tree
// it works as it takes all  minimum nodes first and then add minm weighted edges if they are not already visited
// we will be using priority queue  to keep track on min wighted edges conncted to that nodes
// we WILL SORTe ALL WEIGHTED edges and nodes in proirity quque
// OVERALL TIME COMPLEXITY will be O((E+V)log(V))

#include <bits/stdc++.h>
  
#define MAX 1000000
#define ll long long
using namespace std;
int visited[MAX] = {0};
typedef pair<ll, ll> PII;
priority_queue<PII, vector<PII>, greater<PII>> pq;
vector<pair<ll, ll>> g[MAX];
int primes(int node)
{
               pq.push({0, node});
               int cost = 0;  
               while (!(pq.empty()))
               {
                              pair<ll, ll> p = pq.top();
                              pq.pop();
                              if (visited[p.second] == 1)
                                             continue;
                              visited[p.second] = 1;
                              cost += p.first;
                              for (int i = 0; i < g[p.second].size(); i++)
                              {
                                             pair<ll, ll> x = g[p.second][i];
                                             if (visited[x.second] == 0)
                                             {
                                                            pq.push(g[p.second][i]);
                                             }
                              }
               }
               return cost;
}
int main()
{         long x;
cin>>x;
               int n, m;
               cin >> n >> m;
               for (int i = 0; i < m; i++)
               {
                              int u, v, w;
                              cin>>w;
                              cin >> u >> v;
                              g[u].push_back({w, v});
                              g[v].push_back({w, u});
               }
               int minimumcost = primes(1);
             if (x >= minimumcost)
               {
                            cout<<"YES"<<endl;
               }
               else
               {
                              cout<<"NO"<<endl;
               }
}