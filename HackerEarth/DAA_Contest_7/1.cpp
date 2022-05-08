#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vll vector<long long>
#define vpii vector<pii >
#define Graph vector<vector<int> >
#define WGraph vector<vector<pii>>
#define read freopen("input.txt","r",stdin)
#define write freopen("output.txt","w",stdout)
#define mp(a,b) make_pair(a,b)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define bound(i,j,n,m) ((i)<n&&(j)<m&&(i)>=0&&(j)>=0)
ll g[300][300];
void floyedWarshal(int n)
{
    //g[i][i] should be zero
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(g[i][k]<LLONG_MAX&&g[k][j]<LLONG_MAX)
                    g[i][j]=min(g[i][j],g[i][k]+g[k][j]);
            }
        }
    }
}

void solvecases(int cse)
{
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
            cin>>g[i][j];
    int k;
    cin>>k;
    for(int i=0;i<k;++i)
    {
        int u,v,c;
        cin>>u>>v>>c;
        --u;--v;
        ll ans=0;
        for(int i=0;i<n;++i)
        {
            for(int j=i+1;j<n;++j)
            {
                g[i][j]=min({g[i][j],g[i][u]+c+g[v][j],g[i][v]+c+g[u][j]});
                ans+=g[i][j];
                g[j][i]=g[i][j];
            }
        }
        cout<<ans<<' ';
    }
    cout<<'\n';
}
int main()
{
    fastio;
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++)
    {
        solvecases(i);
    }
}
