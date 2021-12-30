#include<iostream>
#include<iomanip>
#include<string>
#include<math.h>
#include<utility>
#include<vector>
#include<deque>
#include<algorithm>
#include<functional>
#include<numeric>
#define ll long long
#define pii pair<int, int>
#define ff first
#define ss second
using namespace std;
 
void solve(){
    int n, m, rb, cb, rd, cd;
    cin >> n >> m >> rb >> cb >> rd >> cd;
 
    if(rb==rd || cb==cd){
        cout << 0 << endl;
    }
    else if(rb<rd && cb<cd){
        cout << min(rd-rb, cd-cb) << endl;
    }
    else if(rb<rd && cb>cd){
        cout << rd-rb << endl;
    }
    else if(rb>rd && cb<cd){
        cout << cd-cb << endl;
    }
    else{
        cout << min(2*n-rb-rd, 2*m-cb-cd)<< endl;
        
    }
}
 
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}