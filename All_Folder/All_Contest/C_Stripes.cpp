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

    //8*8 matrix
    vector<vector<char>>v(8,vector<char>(8));



    //input

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>v[i][j];
        }
    }

    int max_red_row=0;
    int max_blue_column=0;


    for(int i=0;i<8;i++){
        int red_count=0;
        int blue_count=0;
        for(int j=0;j<8;j++){
            if(v[i][j]=='R'){
                red_count++;
            }
            if(v[j][i]=='B'){
                blue_count++;
            }
        }

        max_red_row=max(max_red_row,red_count);
        max_blue_column=max(max_blue_column,blue_count);
    }

    // cout<<max_red_row<<" "<<max_blue_column<<endl;

    if(max_red_row==8 ){
        cout<<"R"<<endl;
    }
    else if(max_blue_column==8){
        cout<<"B"<<endl;
    }
    else{
        cout<<"B"<<endl;
    }










    // char c='.';
    // for(int i=0;i<8;i++)
    // {
    //     int cnt=0;
    //     for(int j=0;j<8;j++)
    //     {
    //         if(v[i][j]=='R')
    //         {
    //             cnt++;
    //         }
    //     }
    //     if(cnt==8)
    //     {
    //         c='R';
    //         break;
    //     }
    // }
    // if(c!='.')
    // {
    //     cout<<c<<endl;
    //     continue;
    // }
    // for(int i=0;i<8;i++)
    // {
    //     int cnt=0;
    //     for(int j=0;j<8;j++)
    //     {
    //         if(v[i][j]=='B')
    //         {
    //             cnt++;
    //         }
    //     }
    //     if(cnt==8)
    //     {
    //         c='B';
    //         break;
    //     }
    // }
    // cout<<c<<endl;
    
     

}

    return 0;
}