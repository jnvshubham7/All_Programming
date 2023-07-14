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



vector <int> func(string s, vector<int> si, vector<int> ei){

    vector<int> ans;

    for(int i=0;i<si.size();i++){

        int start = si[i];
        int end = ei[i];

        int count = 0;

        for(int j=start;j<=end;j++){

            if(s[j]=='*'){
                count++;
            }
        }

        ans.push_back(count);

    }

    return ans;

}





int main(){
ll t;
cin>>t;
while(t--){

    string s = "*|*|";

     vector<int> si={1,2};
    vector<int> ei={3,4};

    vector<int> ans = func(s,si,ei);

    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;



    

}

    return 0;
}

