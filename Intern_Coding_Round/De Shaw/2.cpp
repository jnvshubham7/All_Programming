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


vector<string> processLogs(vector<string> logs, int threshold) {
    map<string, int> map;
    
    for(int i=0; i<logs.size(); i++)
    {
        string &s = logs[i];
        string first = "";
        string second = "";
            
        int k = 2;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == ' '){
                if(k == 2){
                    k--;
                }else{
                    break;
                }
                continue;
            }
            
            if(k == 2){
                first.pb(s[i]);
            }else{
                second.pb(s[i]);
            }
        }
        if(first == second){
            map[first]++;
        }else{
            map[first]++;
            map[second]++;
        }   
    }
    
    vector<string> ans;
    for(auto x : map)
    {
        if(x.second >= threshold){
            ans.pb(x.first);
        }
    }
     
    return ans;
}

int main(){



    return 0;
}