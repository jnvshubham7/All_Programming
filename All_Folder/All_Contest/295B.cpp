//BISMILLAHIRRAHMANIRRAHIM



#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <string>
#include <cctype>
#include <climits>
#include <cmath>
#include <utility>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

#define pii pair < int , int >
#define i64 long long
#define CLR(x) memset(x,0,sizeof x)
#define SET(x,y) memset(x,y,sizeof x)
#define PB(x) push_back(x)

int g[510][510],v[510];
i64 d[510][510],sm[510];


int main() {
    int i,j,k,n;
    cin>>n;
    for(i=1;i<=n;i++) for(j=1;j<=n;j++) scanf("%d",&g[i][j]);
    for(i=0;i<n;i++) scanf("%d",&v[i]);
    i64 s=0;
    for(k=n-1;k>=0;k--) {
        for(i=k+1;i<n;i++) {
            d[v[k]][v[i]]=g[v[k]][v[i]];
            d[v[i]][v[k]]=g[v[i]][v[k]];
            for(j=k+1;j<n;j++) {
                if(d[v[k]][v[i]]>g[v[k]][v[j]]+d[v[j]][v[i]]) d[v[k]][v[i]]=g[v[k]][v[j]]+d[v[j]][v[i]];
                if(d[v[i]][v[k]]>d[v[i]][v[j]]+g[v[j]][v[k]]) d[v[i]][v[k]]=d[v[i]][v[j]]+g[v[j]][v[k]];
            }
            s+=d[v[k]][v[i]];
            s+=d[v[i]][v[k]];
        }
        for(i=k+1;i<n;i++) for(j=k+1;j<n;j++) if(i!=j) {
            if(d[v[i]][v[j]]>d[v[i]][v[k]]+d[v[k]][v[j]]) {
                s+=d[v[i]][v[k]]+d[v[k]][v[j]]-d[v[i]][v[j]];
                d[v[i]][v[j]]=d[v[i]][v[k]]+d[v[k]][v[j]];
            }
        }
        sm[k]=s;
    }
    cout<<sm[0];
    for(i=1;i<n;i++) cout<<' '<<sm[i];
    puts("");
    return 0;
}
