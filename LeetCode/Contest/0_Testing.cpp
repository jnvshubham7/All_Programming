// Odd queries

// 25

// 26

// You are given an array of integers Arr. You are asked Q queries of two types:

// • 1/v. change element of Arr to v

// 21r. Determine the count of integers that have an odd count in range /

// 10 A

// 2

// Task

// For every query of type 2. you have to tell the number of elements in the

// range from/to rwith an odd count in that range.

// Note: Assume Fbased indexing.

// Explanation

// Assumptions

// Test a Custa

// N-4

// Arr 11. 2. 3. 2)

// Q-3

// queries=112 13111241/21411


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

int main(){

    int n,q;
    cin>>n>>q;
    vi arr(n);
    fr(i,n)
    {
        cin>>arr[i];
    }
    while(q--)
    {
        int type;
        cin>>type;
        if(type==1)
        {
            int idx,val;
            cin>>idx>>val;
            arr[idx]=val;
        }
        else
        {
            int l,r;
            cin>>l>>r;
            int cnt=0;
            for(int i=l;i<=r;i++)
            {
                if(arr[i]%2!=0)
                    cnt++;
            }
            cout<<cnt<<endl;
        }
    }

    

    return 0;
}