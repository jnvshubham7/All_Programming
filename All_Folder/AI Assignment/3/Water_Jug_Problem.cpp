#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    pair<int,int> _initial={5,2}; 
    queue<pair<int,int>> q; 
    vector<vector<bool>> 
    vis(6,vector<bool>(3,false)); 
    q.push(_initial); int level=0; 
    bool flag=false; 
    while(q.size()>0)
    { 
        int size=q.size();
// cout<<size<<' '; 
for(int i=0;i<size;i++)
{ 
    pair<int,int> x=q.front();
q.pop(); 
if(x.second==1)
{ 
    flag=true;break;
}
if(x.first>5 or x.second>2) continue;
if(x.first==0 and x.second==0) continue;
if(vis[x.first][x.second]) continue;
vis[x.first][x.second]=true;
// /The possible next states the current state can have/
// /Empty the 5 liter jug and other jug remains as it is/
if(x.first!=0) 
q.push({0,x.second});
// /Empty the 2 liter jug and other jug remains as it is/
if(x.second!=0) 
q.push({x.first,0});
// /Pour water from 5 liter jug to 2 liter jug until one of the jug
// is either empty or full/
int empty=2-x.second;
int amount=min(x.first,empty);
q.push({x.first-amount,x.second+amount});
// /Pour water from 2 liter jug to 5 liter jug until one of the jug
// is either empty or full/
empty=5-x.first;
amount=min(x.second,empty);
q.push({x.first+amount,x.second-amount});
}
if(flag) break;level++;
} 
if(flag) 
cout<<level<<"\n"; 
else cout<<"Goal State can't be reached"<<'\n'; 
return 0;
}