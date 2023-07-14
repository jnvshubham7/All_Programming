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




void func(string s, int n,int len,int a,int b)
{

    





}
















int main(){
ll t=1;
// cin>>t;
while(t--){

    string s = "{{}{{{}}";

    int n = s.length();
    int len=0;
    int a,b;
    stack<int> st;
    for(int i=0;i<n;i++)
    {
        
        if(s[i]=='{')
        {
            st.push(i);
        }
        else
        {
            if(!st.empty())
            {
                if(len<i-st.top()+1)
                {
                     //cout<<i<<" "<<st.top()<<endl;
                     len=i-st.top()+1;
                     //cout<<len<<endl;
                     a=st.top();
                     b=i;
                     st.pop();
                }
                else
                {
                    st.pop();
                }
            }
        }
       // cout<<st.top()<<endl;
    }
    cout<<len<<endl;
    cout<<a<<" "<<b<<endl;





}

    return 0;
}