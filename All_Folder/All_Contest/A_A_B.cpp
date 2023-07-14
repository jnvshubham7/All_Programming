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

int main(){
ll t;
cin>>t;
while(t--){

    string s;
    cin>>s;

    int n = s.length();

    //find + and - in string '
    // if(s.find('+') != string::npos){
    //     // + is present
    //     int pos = s.find('+');
    //     string s1 = s.substr(0,pos);
    //     string s2 = s.substr(pos+1,n-pos-1);
    //     int n1 = stoi(s1);
    //     int n2 = stoi(s2);
    //     cout<<n1+n2<<endl;
    // }
    // else if(s.find('-') != string::npos){
    //     // - is present
    //     int pos = s.find('-');
    //     string s1 = s.substr(0,pos);
    //     string s2 = s.substr(pos+1,n-pos-1);
    //     int n1 = stoi(s1);
    //     int n2 = stoi(s2);
    //     cout<<n1-n2<<endl;
    // }

    //check for + and - in string
    bool plus = false;
    bool minus = false;

    fr(i,n){
        if(s[i] == '+'){
            plus = true;
        }
        else if(s[i] == '-'){
            minus = true;
        }
    }

    if(plus){
        int pos = s.find('+');
        string s1 = s.substr(0,pos);
        string s2 = s.substr(pos+1,n-pos-1);
        int n1 = stoi(s1);
        int n2 = stoi(s2);
        cout<<n1+n2<<endl;
    }
    else if(minus){
        int pos = s.find('-');
        string s1 = s.substr(0,pos);
        string s2 = s.substr(pos+1,n-pos-1);
        int n1 = stoi(s1);
        int n2 = stoi(s2);
        cout<<n1-n2<<endl;
    }

    
    


    

}

    return 0;
}